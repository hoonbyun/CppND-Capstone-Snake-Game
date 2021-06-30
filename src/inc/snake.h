#ifndef SNAKE_H
#define SNAKE_H

#include "border.h"

#include <cmath>
#include <iostream>

class Snake {
 public:
  Snake();

  Snake(int grid_width, int grid_height);

  ~Snake();

  enum class Direction { kUp, kDown, kLeft, kRight };

  void Update(p_vSDLPoints borderLine);
  void GrowBody();
  bool SnakeCell(int x, int y);
  void SetSpeed(float newSpeed) { speed = newSpeed; }

  Direction direction = Direction::kUp;

  float speed{0.1f};
  int size{1};
  bool alive{true};
  float head_x;
  float head_y;
  vSDLPoints body;

 private:
  void UpdateHead();
  void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell, p_vSDLPoints borderLine);

  bool growing{false};
  int grid_width;
  int grid_height;
  Border border;
};

#endif
