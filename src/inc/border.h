#ifndef BORDER_H
#define BORDER_H

#include "SDL.h"

#include <vector>
#include <memory>

using vSDLPoints = std::vector<SDL_Point>;
using p_vSDLPoints = std::unique_ptr<vSDLPoints>;

class Border {
  public:
    Border();
    Border(int grid_width, int grid_height);
    ~Border();

    bool isBorderCell(int x, int y);
    vSDLPoints borderLine;

  private:
    void insertBorder();
    int _grid_height;
    int _grid_width;
};

#endif
