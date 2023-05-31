#include "module1.h"

void inc(module1_t* m) {
    inc_poly(m);
}

int main() {
    module1_t m = { .counter = 0 };
    printf("counter: %d\n", m.counter);

    inc(&m);

    printf("counter: %d\n", m.counter);

    return 0;
}

