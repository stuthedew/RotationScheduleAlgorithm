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


#include <time.h>
#include <stdint.h>
#include "rotations.h"

#define MAX_GRIDS   42

#define START_YEAR  2015
#define START_MONTH 7
#define START_DAY   7

namespace grid{

  time_t startTime ;
  struct tm * timeinfo ;


typedef struct grid_t{

  uint16_t       ID ; // Grid ID given by school
  uint16_t       maxSpots ; // maximum number of students per grid
  rotation_t*   rotation[ ROTATION_NUM ] ; // rotation schedule

}grid_t;


  grid_t       allGrids[ MAX_GRIDS ] ;
  void          loadGrid( void ) ;
  void          loadArray( grid_t* gPtr, uint16_t id, uint16_t maxSpots ) ;


}
