
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

#include "rotation_config.h"

using namespace grid;
using namespace std;

int main(int argc, char *argv[]) {
    loadGrid();
    grid_t* gPtr = &allGrids[ 2 ] ;
    cout << gPtr->maxSpots << endl;
}
