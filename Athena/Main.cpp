#include "ProcMem.h"
#include "offsets.h"
#include "Gui.h"
#include <thread>
using namespace System;
using namespace System::Windows::Forms;
#pragma comment(lib,"user32.lib") 

bool csgoOpen = false;
bool enabled = false;
bool bhop = false;
bool noFlash = false;
bool chams = false;
bool teamChams = true;
bool enemyChams = true;
bool radar = false;
int teamRed = 0;
int teamGreen = 1;
int teamBlue = 0;
int teamAlpha = 1;
int enemyRed = 1;
int enemyGreen = 0;
int enemyBlue = 0;
int enemyAlpha = 1;

ProcMem procMem;
DWORD gameModule;
DWORD engineModule;
DWORD localPlayer;
DWORD glowObjectManager;
char process[9] = "csgo.exe";
char module[11] = "client.dll";

struct vector { float x, y, z; };

bool isPlayerMoving() {
    vector pVelocity = procMem.Read<vector>(localPlayer + m_vecVelocity);
    int velocity = pVelocity.x + pVelocity.y + pVelocity.z;
    if (velocity != 0) return true;
    return false;
}

DWORD WINAPI startGui(void *) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Athena::Gui form;
    Application::Run(% form);
    exit(0);
    return 0;
}

DWORD WINAPI athena(void *) {
    if (!FindWindow(NULL, "Counter-Strike: Global Offensive")) while (FindWindow(NULL, "Counter-Strike: Global Offensive") == 0);
    procMem.Process(process);
    gameModule = procMem.Module(module);
    while (true) {
        if (!FindWindow(NULL, "Counter-Strike: Global Offensive")) {
            csgoOpen = false;
            enabled = false;
        } else csgoOpen = true;
        if (enabled) {
            localPlayer = procMem.Read<DWORD>(gameModule + dwLocalPlayer);
            glowObjectManager = procMem.Read<DWORD>(gameModule + dwGlowObjectManager);
            if (bhop && isPlayerMoving() && procMem.Read<BYTE>(localPlayer + m_fFlags) && GetAsyncKeyState(VK_SPACE) && 0x8000) procMem.Write<DWORD>(gameModule + dwForceJump, 6);
            if (noFlash) procMem.Write<DWORD>(localPlayer + m_flFlashDuration, 0);
            int localTeam = procMem.Read<int>(localPlayer + m_iTeamNum);
              for (int i = 0; i < 64; i++) {
                DWORD player = procMem.Read<DWORD>(gameModule + dwEntityList + i * 0x10);
                int glowIndex = procMem.Read<int>(player + m_iGlowIndex);
                int playerTeam = procMem.Read<int>(player + m_iTeamNum);
                if (playerTeam != localTeam && chams && enemyChams) {
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0x4)), enemyRed);
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0x8)), enemyGreen);
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0xC)), enemyBlue);
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0x10)), enemyAlpha);
                }
                else if (playerTeam == localTeam && chams && teamChams) {
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0x4)), teamRed);
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0x8)), teamGreen);
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0xC)), teamBlue);
                    procMem.Write<float>(glowObjectManager + ((glowIndex * 0x38 + 0x10)), teamAlpha);
                }
                procMem.Write<bool>(glowObjectManager + ((glowIndex * 0x38) + 0x24), true);
                procMem.Write<bool>(glowObjectManager + ((glowIndex * 0x38) + 0x25), false);
                if (radar) procMem.Write<bool>(player + m_bSpotted, 1);
              }
            Sleep(10);
        }
    }
    return 0;
}

[STAThreadAttribute]
void Main(array<String^>^ args) {
    HANDLE guiThread = ::CreateThread(NULL, 0, startGui, NULL, 0, NULL);
    HANDLE cheatThread = ::CreateThread(NULL, 0, athena, NULL, 0, NULL);

    ::WaitForSingleObject(guiThread, INFINITE);
    ::WaitForSingleObject(cheatThread, INFINITE);
}