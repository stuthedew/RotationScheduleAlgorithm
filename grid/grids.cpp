/**************************************************************************/
/*!
    @file     grids.cpp
    @author   Stuart Feichtinger
    @license  MIT (see license.txt)

    Grid data structure


    @section  HISTORY
    v0.0.1 - First release

*/
/**************************************************************************/

#include "grids.h"


namespace grid{

void setStartTime( int year, int month, int dayOfMonth ){
  time( &startTime ) ;

  timeinfo = localtime( &startTime ) ;

  timeinfo->tm_year = year - 1900 ;
  timeinfo->tm_mon = month - 1 ;
  timeinfo->tm_mday = dayOfMonth ;

  startTime = mktime( timeinfo ) ;

}

void setRotation( grid_t* gPtr, rotationCode_e r1, rotationCode_e r2, rotationCode_e r3, rotationCode_e r4, rotationCode_e r5, rotationCode_e r6, rotationCode_e r7, rotationCode_e r8, rotationCode_e r9 ) {
  uint8_t gItr = 0 ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r1 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r2 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r3 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r4 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r5 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r6 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r7 ] ;
  gPtr->rotation[ gItr++ ] = rotationArray[ r8 ] ;
  gPtr->rotation[ gItr ]   = rotationArray[ r9 ] ;
}

void loadArray( grid_t* gPtr, uint16_t id, uint16_t maxSpots ){
  grid_t* temp = gPtr ;

  temp->ID = id ;
  temp->maxSpots = maxSpots ;


}

void loadGrid( void ){
  uint8_t gItr = 0 ;

  setStartTime( START_YEAR, START_MONTH, START_DAY ) ;

  loadArray( &allGrids[ gItr ], gItr + 1, 2 ); // Grid 1
  setRotation( &allGrids[ gItr++ ], VAC1, VAC2, NEURO, MED, PCC, PEDS, OB_GYN, PSYCH, SURG ) ;

  loadArray( &allGrids[ gItr ], gItr + 1, 2 ); // Grid 2
  setRotation( &allGrids[ gItr++ ], VAC1, VAC2, PSYCH, SURG, MED, PEDS, OB_GYN, NEURO, PCC ) ;

  loadArray( &allGrids[ gItr ], gItr + 1, 4 ); // Grid 3
  setRotation( &allGrids[ gItr++ ], VAC1, VAC2, NEURO, MED, SURG, PCC, PSYCH, PEDS, OB_GYN ) ;


}



}
