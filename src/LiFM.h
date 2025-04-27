//
// Created by Elias Aggergaard Larsen on 27/04/2025.
//

#ifndef LIFM_H
#define LIFM_H
#include <memory>
#include "LiFM-Data/LiFMDataHandler.h"


class LiFM
{
public:
  LiFM();
private:
  std::shared_ptr<LiFMDataHandler> dataHandler_;
};



#endif //LIFM_H
