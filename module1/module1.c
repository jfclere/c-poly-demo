#include "module1.h"
#define TYPE module1_t
#include "common.c"

int try1() {
    module1_t m = { .counter = 0 };
    printf("counter: %d\n", m.counter);

    inc_poly(&m);

    printf("counter: %d\n", m.counter);

    return 0;
}

