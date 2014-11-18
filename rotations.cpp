
#include "rotations.h"

namespace grid{

rotation_t        med( MED_LENGTH ) ;
rotation_t        neuro( NEURO_LENGTH ) ;
rotation_t        ob_gyn( OB_GYN_LENGTH ) ;
rotation_t        pcc( PCC_LENGTH ) ;
rotation_t        peds( PEDS_LENGTH ) ;
rotation_t        psych( PSYCH_LENGTH ) ;
rotation_t        surg( SURG_LENGTH ) ;
rotation_t        vac( VAC_LENGTH ) ;
rotation_t* const vac1 = &vac;
rotation_t* const vac2 = &vac;


rotation_t* rotationArray[] = { &med, &neuro, &ob_gyn,  &pcc, &peds, &psych, &surg, vac1, vac2 } ;




}
