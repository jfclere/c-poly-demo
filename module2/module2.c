#include "module2.h"

void inc(module2_t* m) {
    inc_poly(m);
}

int main() {
    module2_t m = { .counter = 0.5 };
    printf("counter: %f\n", m.counter);

    inc(&m);

    printf("counter: %f\n", m.counter);

    return 0;
}

