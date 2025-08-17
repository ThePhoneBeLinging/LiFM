//
// Created by EAL on 27/04/2025.
//

#ifndef LIFM_H
#define LIFM_H
#include <memory>

#include "LiFM-Timeline/LiFMTimeline.hpp"


class LiFM
{
public:
  LiFM();
private:
  std::shared_ptr<LiFMTimeline> timeline_;
};



#endif //LIFM_H
