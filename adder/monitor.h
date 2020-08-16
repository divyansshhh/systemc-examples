#ifndef MONITOR_H
#define MONITOR_H

#include <systemc.h>

SC_MODULE(monitor) {
    sc_in<bool> a, b, c;
    sc_in<bool> sum, carry;

    void mon(void);

    SC_CTOR(monitor) {
        SC_METHOD(mon);
        sensitive << sum << carry;
    }
};

#endif