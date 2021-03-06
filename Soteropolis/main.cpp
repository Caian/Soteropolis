#include "stdafx.h"

#include "Engine.hpp"

int main(int argc, char *argv[]) {
  Engine *engine = new Engine();
  engine->start();
  engine->loop();
  delete engine;
  std::exit(EXIT_SUCCESS);
}
