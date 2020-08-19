#ifndef DRIVER_H
#define DRIVER_H

#include <systemc.h>

SC_MODULE(driver) {
    sc_out<bool> ori;
    sc_in_clk clk;

    void drive(void);


    SC_CTOR(driver) {
        SC_THREAD(drive);
        sensitive << clk.neg();
    }
};

#endif