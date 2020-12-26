#include "raycast.h"
//Screen dimension constants
int   init(t_wolf *sdl)
{
    int succes = 1;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
      succes = -1;
    }
    else
    {
      sdl->gwindow = SDL_CreateWindow("SDL tutorial",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,Screen_with,Screen_height,SDL_WINDOW_SHOWN);
      if (sdl->gwindow == NULL)
      {
        printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError()  );
        succes = -1;
      }
      else 
      {
        sdl->gsurface = SDL_GetWindowSurface(sdl->gwindow);
      }
    }
    return succes;
}

int     loadMedia(t_wolf *sdl)
{
  int success = 1;
  sdl->Hello = SDL_LoadBMP("hello_world.bmp");
  if (sdl->Hello == NULL)
  {
    printf( "Unable to load image %s! SDL Error: %s\n", "02_getting_an_image_on_the_screen/hello_world.bmp", SDL_GetError()  );
            success = -1 ;
  }
  return success;
}
void close_at(t_wolf *sdl)
{
      //Deallocate surface
     SDL_FreeSurface( sdl->Hello);
     sdl->Hello = NULL;
      
    //Destroy window
     SDL_DestroyWindow(sdl->gwindow);
     sdl->gwindow = NULL;
     //Quit SDL subsystem
     SDL_Quit();                            
}

int main()
{
  t_wolf  sdl;

  if (!init(&sdl)){
    printf( "Failed to initialize!\n"  );
  }
  else
  {
    //load media
    if (!loadMedia(&sdl))
    {
      printf( "Failed to load media!\n"  );
    }
    else
    {
      // Apply the image
      SDL_BlitSurface(sdl.Hello, NULL, sdl.gsurface, NULL);
      // Update the surface
      SDL_UpdateWindowSurface(sdl.gwindow);
      SDL_Delay( 2000  );
    }
  }
  close_at(&sdl);

  return 0;
}
