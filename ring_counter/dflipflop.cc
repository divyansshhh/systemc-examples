#include <systemc.h>
#include "dflipflop.h"


void dflipflop::action(void) {
    if(pr ==  0 || clr == 0) {
        if(pr == 0)
            q = 1;
        else 
            q = 0;
    } else {
        q = d;
    }
}