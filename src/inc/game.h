#ifndef GAME_H
#define GAME_H

#include "controller.h"
#include "renderer.h"

#include <random>
#include <iostream>

class Game {
 public:
  Game();
  Game(std::size_t grid_width, std::size_t grid_height);
  ~Game();

  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration, float initSpeed);
  int GetScore() const;
  int GetSize() const;

 private:
  Border border;
  Snake snake;
  SDL_Point food;

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  int score{0};
  p_vSDLPoints borderLine;

  void PlaceFood();
  void Update();
};

#endif
