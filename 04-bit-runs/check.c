#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

uint32_t bit_runs(uint64_t x);

int main(void) {
    if (bit_runs(UINT64_C(0x3b)) != 2 || bit_runs(0) != 0) return 1;
    puts("OK");
    return 0;
}
