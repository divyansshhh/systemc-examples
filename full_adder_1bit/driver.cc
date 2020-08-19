#include <systemc.h>
#include "driver.h"

void driver::drive(void) {
    sc_uint<3> iter = 0;
    for(; iter<8; ++iter){
        a = iter[0];
        b = iter[1];
        c = iter[2];

        wait(3, SC_SEC);
    }
}