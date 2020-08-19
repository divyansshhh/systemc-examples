#ifndef FULL_ADDER_H
#define FULL_ADDER_H

#include <systemc.h>
#include "half_adder.h"

SC_MODULE(full_adder){

    sc_in<bool> a, b, c;
    sc_out<bool> sum, carry;

    half_adder adder1, adder2;

    sc_signal<bool> inter_sum, inter_carry1, inter_carry2;

    void final_carry(void);

    SC_CTOR(full_adder): adder1("adder1"), adder2("adder2"){
        

        adder1.a(a);
        adder1.b(b);
        adder1.sum(inter_sum);
        adder1.carry(inter_carry1);

        adder2.a(inter_sum);
        adder2.b(c);
        adder2.sum(sum);
        adder2.carry(inter_carry2);
        SC_METHOD(final_carry);
        sensitive << inter_carry1 << inter_carry2;
    }
};

#endif