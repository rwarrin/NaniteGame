#include "game.h"
#include "resources.h"

void InitiateGame() {

}

bool GameFrameFunction() {
	float deltatime = hge->Timer_GetDelta();

	if(hge->Input_KeyDown(HGEK_ESCAPE)) {
		return true;
	}

	return false;
}

bool GameRenderFunction() {
	hge->Gfx_BeginScene();
	hge->Gfx_Clear(0x000000);
	
	hge->Gfx_EndScene();
	return false;
}