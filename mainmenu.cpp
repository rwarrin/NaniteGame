#include "mainmenu.h"
#include "resources.h"
#include "game.h"

#include <hgesprite.h>

HTEXTURE mainmenutexture;
hgeSprite *mainmenusprite;

void MainMenu() {
	mainmenutexture = hge->Texture_Load("C:\\Projects\\NaniteGame\\Debug\\data\\images\\menu\\titlescreen.png");
	mainmenusprite = new hgeSprite(mainmenutexture, 0, 0, 640, 480);

	hge->System_SetState(HGE_FRAMEFUNC, MainMenuFrameFunction);
	hge->System_SetState(HGE_RENDERFUNC, MainMenuRenderFunction);
}

void DeleteMainMenu() {
	hge->Texture_Free(mainmenutexture);
	delete mainmenusprite;
}

bool MainMenuFrameFunction() {
	if(hge->Input_KeyDown(HGEK_ESCAPE)) {
		return true;
	}

	if(hge->Input_KeyDown(HGEK_SPACE)) {
		// Start Game
		InitiateGame();
		DeleteMainMenu();
		hge->System_SetState(HGE_FRAMEFUNC, GameFrameFunction);
		hge->System_SetState(HGE_RENDERFUNC, GameRenderFunction);
	}

	return false;
}

bool MainMenuRenderFunction() {
	hge->Gfx_BeginScene();
	hge->Gfx_Clear(0x000000);
	mainmenusprite->Render(0, 0);
	hge->Gfx_EndScene();
	return false;
}