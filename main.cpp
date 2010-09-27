#include "resources.h"
#include "window.h"
#include "mainmenu.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	CreateHGEWindow(640, 480, "Nanite Game");

	if(hge->System_Initiate()) {
		MainMenu();

		hge->System_Start();
	}
	else {
		MessageBox(NULL, hge->System_GetErrorMessage(), "Error", MB_OK | MB_ICONERROR);
	}

	hge->System_Shutdown();
	hge->Release();
	return 0;
}