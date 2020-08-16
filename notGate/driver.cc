#include <systemc.h>
#include "driver.h"

void driver::drive() {
    while(true) {
        dr_out = 1;
        wait(3, SC_SEC);
        dr_out = 0;
        wait(3, SC_SEC);
    }
}