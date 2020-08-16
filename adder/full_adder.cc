#include <systemc.h>
#include "full_adder.h"

void full_adder::final_carry(void) {
    carry = inter_carry1 or inter_carry2;
}