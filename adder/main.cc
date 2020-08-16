#include <systemc.h>
#include "driver.h"
#include "monitor.h"
#include "full_adder.h"


int sc_main(int argc, char* argv[]) {
    sc_signal<bool> a, b, c, sum, carry;

    monitor mon("mon");
    driver dr("driver");
    full_adder adder("full_adder");

    dr.a(a);
    dr.b(b);
    dr.c(c);

    mon.a(a);
    mon.b(b);
    mon.c(c);
    mon.sum(sum);
    mon.carry(carry);


    adder.a(a);
    adder.b(b);
    adder.c(c);
    adder.sum(sum);
    adder.carry(carry);

    //tracing the output
    sc_trace_file *fp;
	fp=sc_create_vcd_trace_file("vcd_trace");
	fp->set_time_unit(3, SC_SEC);
	
	sc_trace(fp, a, "a_in");
	sc_trace(fp, b, "b_in");
    sc_trace(fp, c, "c_in");
    sc_trace(fp, sum, "sum_out");
    sc_trace(fp, carry, "carry_out");
	
	//simulation start
	sc_start(60, SC_SEC);
	sc_close_vcd_trace_file(fp);

    return 0;
}