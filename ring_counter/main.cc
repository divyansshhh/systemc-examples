#include <systemc.h>
#include "ring_counter.h"
#include "driver.h"
#include <iostream>

using namespace std;

int sc_main(int argc, char *argv[])
{
   ring_counter counter("counter");
   driver dr("driver");

   sc_signal<bool> ori, d, q;
   sc_clock clk("clock", 10, SC_SEC, 0.5, 0.0, SC_SEC, true);

   counter.ori(ori);
   counter.clk(clk);

   dr.ori(ori);
   dr.clk(clk);

   //tracing the output
   sc_trace_file *fp;
   fp=sc_create_vcd_trace_file("vcd_trace");
   fp->set_time_unit(1, SC_SEC);

   sc_trace(fp, counter.d1.q, "d1");
   sc_trace(fp, counter.d2.q, "d2");
   sc_trace(fp, counter.d3.q, "d3");
   sc_trace(fp, counter.d4.q, "d4");
   sc_trace(fp, ori, "ori");
   sc_trace(fp, clk, "oclk");

   //
   sc_start(60, SC_SEC);
   sc_close_vcd_trace_file(fp);
}