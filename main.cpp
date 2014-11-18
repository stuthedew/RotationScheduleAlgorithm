
/**************************************************************************/
/*!
    @file     main.cpp
    @author   Stuart Feichtinger
    @license  MIT (see license.txt)

    Algorithm for computing optimal third-year medical school rotation schedule.


    @section  HISTORY
    v0.0.1 - First release

*/
/**************************************************************************/

#include <iostream>
#include <stdio.h>

#include "grid_config.h"


using namespace std;
using namespace grid;
//allGrids[ MAX_GRIDS ] ;

int main(int argc, char *argv[]) {
    loadGrid();
    cout << "test123" << endl;
    grid_t* gPtr = &allGrids[ 0 ] ;
    cout << gPtr->maxSpots << endl;


}
