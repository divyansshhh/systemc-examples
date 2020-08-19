#ifndef DRIVER_H
#define DRIVER_H

#include <systemc.h>

SC_MODULE(driver) {
    sc_out<bool> a, b, c;

    void drive(void);

    SC_CTOR(driver) {
        SC_THREAD(drive);
    }
};

#endif