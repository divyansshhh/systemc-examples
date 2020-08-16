#include <systemc.h>
#include "notGate.h"
#include "monitor.h"
#include "driver.h"
#include <iostream>

int sc_main(int argc, char* argv[]){
    sc_signal<bool> s_in, s_out;    

    driver dr("driver");
    monitor mon("monitor");
    notGate nGate("nGate");

    // creating input connections
    dr.dr_out(s_in);
    mon.mon_in(s_in);
    nGate.input(s_in);

    // creating output connections
    mon.mon_out(s_out);
    nGate.output(s_out);

    // starting simulations
    sc_start(30, SC_SEC);

    return 0;
}