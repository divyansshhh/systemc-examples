#ifndef NOT_H
#define NOT_H
#include <systemc.h>

SC_MODULE(notGate){
    //defining ports

    sc_in<bool> input;
    sc_out<bool> output;

    void gateAction(void);

    SC_CTOR(notGate){
        SC_METHOD(gateAction);
        sensitive << input;
    }
};

#endif