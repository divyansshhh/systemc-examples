#ifndef MONITOR_H
#define MONITOR_H

#include <systemc.h>

SC_MODULE(monitor) {
    sc_in<bool> mon_in;
    sc_in<bool> mon_out;

    void mon(void);

    SC_CTOR(monitor) {
        SC_METHOD(mon);
        sensitive << mon_out;
    }
};

#endif