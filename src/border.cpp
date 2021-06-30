#include "border.h"

Border::Border() {}

Border::Border(int grid_width, int grid_height) {
    _grid_width = grid_width;
    _grid_height = grid_height;

    insertBorder();
}

Border::~Border() {}

void Border::insertBorder() {

    SDL_Point point;

    // fill in the top and bottom rows
    for (size_t i = 0; i < _grid_width; i++)
    {
        point.x = i;
        point.y = 0;
        borderLine.push_back(point);
        point.x = i;
        point.y = _grid_height - 1;
        borderLine.push_back(point);
    }

    // fill the sidelines of the border
    for (size_t i = 1; i < _grid_height - 1; i++)
    {
        point.x = 0;
        point.y = i;
        borderLine.push_back(point);
        point.x = _grid_width - 1;
        point.y = i;
        borderLine.push_back(point);
    }
}

bool Border::isBorderCell(int x, int y) {
    for (auto const &point : borderLine)
    {
        if(x == point.x && y == point.y)
        {
            return true;
        }
    }
    return false;
}
