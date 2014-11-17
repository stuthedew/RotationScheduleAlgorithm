/**************************************************************************/
/*!
    @file     grids.h
    @author   Stuart Feichtinger
    @license  MIT (see license.txt)

    Grid data structure


    @section  HISTORY
    v0.0.1 - First release

*/
/**************************************************************************/
#pragma once

#define ROTATION_NUM 9 // Total number of rotations

#include <ctime>
#include <stdint.h>
#include "rotations.h"

namespace grid{

typedef struct grid_t{

  uint8_t     const   gridID ; // Grid ID given by school
  uint8_t     const   maxSpots ; // maximum number of students per grid
  rotation_t*         rotation[ 9 ] ; // rotation schedule

}grid_t;

}
