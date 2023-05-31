#include "module2.h"

int main() {
    module2_t m = { .counter = 0.5 };
    printf("counter: %f\n", m.counter);

    inc_poly(&m);

    printf("counter: %f\n", m.counter);

    return 0;
}

