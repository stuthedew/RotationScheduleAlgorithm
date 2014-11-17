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
#include <ctime>
#include <stdint.h>

namespace rotation{

typedef enum {
    MEDICAL     , // 8 weeks
    NEURO       , // 4 weeks
    OB_GYN      , // 6 weeks
    PCC         , // 8 weeks
    PEDS        , // 6 weeks
    PSYCH       , // 4 weeks
    SURG        , // 8 weeks
    VACATION      // 4 weeks (2 x 2-week-block)
//______________________________________________
//  TOTAL           48 weeks
  } rotationCode_e;

typedef struct rotation_t{

  time_t  const   length ; //number of seconds

  //convert weeks to seconds: days/week * hr/day * min/hr * sec/min
  rotation_t( uint8_t weeks ) : length( weeks * 7 * 24 * 60 * 60 ) {}

}rotation_t;

}
