#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

float bounded_dot(const float *a, const float *b, size_t n);

int main(void) {
    const float a[] = {2, -4, 0.5f}, b[] = {3, 2, 4};
    float result = bounded_dot(a, b, 3);
    if (!(result >= 2.98f && result <= 3.02f)) return 1;
    puts("OK");
    return 0;
}
