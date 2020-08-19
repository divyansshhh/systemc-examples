#ifndef HALF_ADDER_H
#define HALF_ADDER_H

#include <systemc.h>

SC_MODULE(half_adder) {
    sc_in<bool> a, b;
    sc_out<bool> sum, carry;

    void add(void);

    SC_CTOR(half_adder) {
        SC_METHOD(add);
        sensitive << a << b;
    }
};

#endif