

#include "AUX_FUNCTIONS.h"

//////////////////////////// GENERAL DELAY FUNCTION ////////////////////////////

void delay_ms(long delay_value){
    long x;
    for(x=0; x < delay_value; x++) __delay_ms(1);
}
