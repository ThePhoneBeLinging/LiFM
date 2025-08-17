//
// Created by EAL on 27/04/2025.
//

#include "LiFM/LiFM.hpp"

#include <iostream>
#include <ostream>

#include "Utility/ConfigController.h"

LiFM::LiFM() : timeline_(std::make_shared<LiFMTimeline>(std::chrono::system_clock::now()))
{
  for (int i = 0; i < 10; i++)
  {
    std::cout << timeline_->getDateString() << "\n";
    std::cout << timeline_->getClockString() << "\n";
    timeline_->advance();
  }
}
