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

#define MAX_GRIDS   42

#define START_YEAR  2015
#define START_MONTH 7
#define START_DAY   7

#include <time.h>
#include <stdint.h>
#include "rotations.h"

namespace grid{

typedef struct grid_t{

  uint16_t       ID ; // Grid ID given by school
  uint16_t       maxSpots ; // maximum number of students per grid
  rotation_t*   rotation ; // rotation schedule

}grid_t;

class Grid {

};

  void          loadGrid( void ) ;
  void          loadArray( grid_t* gPtr, uint16_t id, uint16_t maxSpots ) ;

extern grid_t       allGrids[ MAX_GRIDS ] ;
extern time_t startTime ;
extern struct tm * timeinfo ;
}
