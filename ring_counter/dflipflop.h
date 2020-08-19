#ifndef DFLIPFLOP_H
#define DFLIPFLOP_H

#include <systemc.h>

SC_MODULE(dflipflop) {
    sc_in<bool> d, pr, clr;
    sc_out<bool> q;
    sc_in_clk clk;

    void action(void);

    SC_CTOR(dflipflop) {
        SC_METHOD(action);
        sensitive << clk.neg() << pr << clr;
    }
};

#endif
