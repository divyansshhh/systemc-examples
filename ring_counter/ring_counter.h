
#ifndef RING_COUNTER_H
#define RING_COUNTER_H

#include <systemc.h>
#include "dflipflop.h"

SC_MODULE(ring_counter) {
    sc_in<bool> ori;
    sc_in_clk clk;

    dflipflop d1, d2, d3, d4;
    sc_signal<bool> q1, q2, q3, q4, q_True, q_False;

    SC_CTOR(ring_counter): d1("d1"), d2("d2"), d3("d3"), d4("d4"){
        q_True = true;
        q_False = false;


        d1.pr(ori);
        d1.clr(q_True);
        d1.d(q4);
        d1.q(q1);
        d1.clk(clk);

        d2.pr(q_True);
        d2.clr(ori);
        d2.d(q1);
        d2.q(q2);
        d2.clk(clk);

        d3.pr(q_True);
        d3.clr(ori);
        d3.d(q2);
        d3.q(q3);
        d3.clk(clk);

        d4.pr(q_True);
        d4.clr(ori);
        d4.d(q3);
        d4.q(q4);
        d4.clk(clk);


    }
        
};

#endif