#include <systemc.h>
#include "monitor.h"
#include <iostream>

using namespace std;

void monitor::mon(void) {
    cout << "time: " << sc_time_stamp() << " | mon_in " << mon_in << " | mon_out " << mon_out <<endl; 
}