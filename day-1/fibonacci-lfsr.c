#include <stdio.h>
#include <stdint.h>

uint16_t lfsr_fib(void) {

    uint16_t start_state = 0xF0;    // seed
    uint16_t lfsr = start_state;    // current state
    uint16_t period = 0;            // cycle
    
    uint16_t bit;                   // operator to manage shifting of XOR'ing bits

    printf("Start state: %4x\n", start_state);

    do
    {   /* taps: 16 14 13 11; feedback polynomial: x^16 + x^14 + x^13 + x^11 + 1 */
        bit = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5)) & 1U;
        lfsr = (lfsr >> 1) | (bit << 15);
        ++period;

        printf("lfsr: %4x, period: %5d\n", lfsr, period);
    }
    while (lfsr != start_state);

    return period;
}


int main() {

    lfsr_fib();
    
    return 0;
}


