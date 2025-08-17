#include "LiFM/LiFM.hpp"
#include "Utility/ConfigController.h"

int main()
{
  ConfigController::loadConfig("../config.json");
  LiFM();
  return 0;
}
