#ifndef RAYCAST_H
# define RAYCAST_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include <unistd.h>

# define Screen_with 640
# define Screen_height 480


typedef struct s_wolf
{
  SDL_Window  *gwindow;
  SDL_Surface *gsurface;
  SDL_Surface  *Hello;

}               t_wolf;

#endif
