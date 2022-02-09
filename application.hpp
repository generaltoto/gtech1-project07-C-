#pragma once 

#include <SDL2/SDL.h>
#include "snake.hpp"
#include "mainSDLWindow.hpp"
#include "fruit.hpp"

#define WIDTH 700
#define GRID_SIZE 25


class Application 
{
private:

  int color;
  int sizeOfSquare = floor(WIDTH / GRID_SIZE);

public: 
    HSnake *sk;
    Fruit *fr;   
    Segment *s;
    MainSDLWindow *wdw;

  void initWindow();

  void initGame();

  bool runGame(bool done);

  void deleteObject();

  void deleteWindow();

  bool replay();
};