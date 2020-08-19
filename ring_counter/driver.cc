#include <systemc.h>
#include "driver.h"
#include <iostream>

using namespace std;

void driver::drive(void) {
    ori = 0;
    wait();
    ori = 1;
}