/**************************************************************************/
/*!
    @file     rotations.h
    @author   Stuart Feichtinger
    @license  MIT (see license.txt)

    Rotation data


    @section  HISTORY
    v0.0.1 - First release

*/
/**************************************************************************/
#pragma once
#include <ctime>
#include <stdint.h>

//Rotation length in weeks
#define   MED_LENGTH      8 // General Medical
#define   NEURO_LENGTH    4 // Neurology
#define   OB_GYN_LENGTH   6 // Obstetrics/Gynecology
#define   PCC_LENGTH      8 // Primary Care Clerkship
#define   PEDS_LENGTH     6 // Pediatrics
#define   PSYCH_LENGTH    4 // Psychiatry
#define   SURG_LENGTH     8 // Surgery
#define   VAC_LENGTH      2 // Vacation X 2 blocks = 4 weeks total
//______________________________________________
//  TOTAL                 48 weeks


namespace grid{

typedef enum {
    MEDICAL     , // General Medical
    NEURO       , // Neurology
    OB_GYN      , // Obstetrics/Gynecology
    PCC         , // Primary Care Clerkship
    PEDS        , // Pediatrics
    PSYCH       , // Psychiatry
    SURG        , // Surgery
    VAC1        , // Vacation Block 1
    VAC2          // Vacation Block 2

  } rotationCode_e;


typedef struct rotation_t{

  time_t  const   length ; //number of seconds

  //convert weeks to seconds: days/week * hr/day * min/hr * sec/min
  rotation_t( uint8_t weeks ) : length( weeks * 7 * 24 * 60 * 60 ) {}

}rotation_t;


rotation_t  medical( MED_LENGTH ) ;
rotation_t  neuro( NEURO_LENGTH ) ;
rotation_t  ob_gyn( OB_GYN_LENGTH ) ;
rotation_t  pcc( PCC_LENGTH ) ;
rotation_t  peds( PEDS_LENGTH ) ;
rotation_t  psych( PSYCH_LENGTH ) ;
rotation_t  surg( SURG_LENGTH ) ;
rotation_t  vac1( VAC_LENGTH ) ;
rotation_t  vac2( VAC_LENGTH ) ;


}
