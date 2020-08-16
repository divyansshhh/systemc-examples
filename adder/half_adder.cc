#include <systemc.h>
#include "half_adder.h"

void half_adder::add(void) {
    sum = a xor b;
    carry = a and b;
}