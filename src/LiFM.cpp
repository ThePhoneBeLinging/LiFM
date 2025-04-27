//
// Created by Elias Aggergaard Larsen on 27/04/2025.
//

#include "LiFM.h"

#include <iostream>
#include <ostream>

LiFM::LiFM() : dataHandler_(std::make_unique<LiFMDataHandler>())
{
  std::cout << "Hello World" << std::endl;
}
