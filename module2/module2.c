#include "module2.h"
#define TYPE module2_t
#include "common.c"

int try2() {
    module2_t m = { .counter = 0.5 };
    printf("counter: %f\n", m.counter);

    inc_poly(&m);

    printf("counter: %f\n", m.counter);

    return 0;
}

