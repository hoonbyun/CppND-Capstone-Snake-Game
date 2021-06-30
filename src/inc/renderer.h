#ifndef RENDERER_H
#define RENDERER_H

#include "SDL.h"
#include "snake.h"
#include "border.h"

#include <vector>

class Renderer {
 public:
  Renderer();

  Renderer(std::size_t screen_width,
           std::size_t screen_height,
           std::size_t grid_width,
           std::size_t grid_height);

  ~Renderer();

  void Render(Border const border, Snake const snake, SDL_Point const &food);
  void UpdateWindowTitle(int score, int fps);

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  std::size_t _screen_width;
  std::size_t _screen_height;
  std::size_t _grid_width;
  std::size_t _grid_height;
};

#endif
