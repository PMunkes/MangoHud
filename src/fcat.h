#pragma once
#ifndef MANGOHUD_FCAT_H
#define MANGOHUD_FCAT_H

#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>
#include <thread>
#include <condition_variable>
#include <array>

#include "timing.hpp"

#include "overlay_params.h"

struct fcatoverlay{
  bool is_active=true;
  unsigned short screen_edge=0;
  size_t currentColor=0;
  const std::array<const ImColor,16> sequence={{{255, 255, 255},{0, 255, 0},{0, 0, 255},{255, 0, 0},{0, 128, 128},{0, 0, 128},{0, 128, 0},{0, 255, 255},{128, 0, 0},{192, 192, 192},{128, 0, 128},{128, 128, 0},{128, 128, 128},{255, 0, 255},{255, 255, 0},{255, 128, 0}}};
};

#endif
