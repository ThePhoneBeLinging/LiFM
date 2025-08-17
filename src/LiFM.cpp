//
// Created by EAL on 27/04/2025.
//

#include "LiFM/LiFM.hpp"

#include <iostream>

#include "Dataholder.hpp"
#include "LiFM-Datatypes/League.hpp"
#include "LiFM-Datatypes/Match.hpp"
#include "Utility/ConfigController.h"

LiFM::LiFM() : timeline_(std::make_shared<LiFMTimeline>(std::chrono::system_clock::now()))
{
  Dataholder::matches_.push_back(
    std::make_shared<Match>(0, 1, std::chrono::system_clock::now(), timeline_));

  auto league = League();
  league.matches_.push_back(0);
  league.clubs_.push_back(0);
  league.clubs_.push_back(1);

  Dataholder::clubs_.push_back(std::make_shared<Club>(timeline_));
  Dataholder::clubs_[0]->name_ = "Brøndby IF";
  Dataholder::clubs_.push_back(std::make_shared<Club>(timeline_));
  Dataholder::clubs_[1]->name_ = "FC København";
  timeline_->advance();

  auto result = league.generateLeagueTable();
  std::cout << result->generateTableString() << "\n";
}
