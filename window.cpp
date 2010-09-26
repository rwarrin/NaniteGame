#include "window.h"
#include "resources.h"

void CreateHGEWindow(int width, int height, std::string title) {
	hge = hgeCreate(HGE_VERSION);

	hge->System_SetState(HGE_SCREENWIDTH, width);
	hge->System_SetState(HGE_SCREENHEIGHT, height);
	hge->System_SetState(HGE_SCREENBPP, 32);
	hge->System_SetState(HGE_FPS, 100);
	hge->System_SetState(HGE_WINDOWED, true);
	hge->System_SetState(HGE_HIDEMOUSE, false);

	hge->System_SetState(HGE_TITLE, title.c_str());
	hge->System_SetState(HGE_LOGFILE, "log.log");
}
