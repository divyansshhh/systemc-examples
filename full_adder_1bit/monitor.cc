#include <systemc.h>
#include "monitor.h"
#include <iostream>

using namespace std;

void monitor::mon(void) {
    cout << "Time: " << sc_time_stamp() << " | a: " << a << " | b: " << b << " | c: " << c << " | sum: " << sum << " | carry: " << carry <<endl;
}