# CPPND: Snake Roguelike

This is a repo for a Snake roguelike, based on the starter code provided in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

This application serves as a snake roguelike game, in which the speed of the snake is randomly generated upon execution, providing the user with a fun and refreshing experience upon each play. Additionally, after each play, the user's stats for that run are printed, allowing them to share their random speed and high score with their friends.

##File and Class Structure
The application is divided into the controller, game, renderer, and snake files. The stats for the snake are generated within the snake class.

## How this Satisfies the Rubric
1.  The project demonstrates an understanding of C++ functions and control structures. (snake.cpp line 5)
2.  The project accepts user input and processes the input. (main.cpp line 22)
3.  The project uses Object Oriented Programming techniques. (snake.h, snake.cpp, game.cpp, game.h)
4.  Classes use appropriate access specifiers for class members. (snake.h line 34)
5.  Class constructors utilize member initialization lists. (snake.h line 11)
6.  Classes encapsulate behavior. (snake.h, game.h)
7.  The project makes use of references in function declarations. (controller.h lines 8 and 11, snake.h line 36)
8. The project uses destructors appropriately. (renderer.h line 12)

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Enter build directory 'cd build'.
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
