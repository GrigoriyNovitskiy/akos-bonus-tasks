#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

size_t add_clamped(int16_t *dst, const int16_t *src, size_t n);

int main(void) {
    int16_t dst[] = {32000, -32000, 7};
    const int16_t src[] = {1000, -1000, -2};
    if (add_clamped(dst, src, 3) != 2 ||
        dst[0] != 32767 || dst[1] != -32768 || dst[2] != 5) return 1;
    puts("OK");
    return 0;
}
