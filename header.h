#ifndef _DEMO_H_
#define _DEMO_H_

#include <SDL2/SDL.h>

/* //Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480; */

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *);
int poll_events();
void draw_stuff(SDL_Instance instance);

#endif /* _DEMO_H_ */
