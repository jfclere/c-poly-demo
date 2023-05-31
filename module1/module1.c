#include "module1.h"

int main() {
    module1_t m = { .counter = 0 };
    printf("counter: %d\n", m.counter);

    inc_poly(&m);

    printf("counter: %d\n", m.counter);

    return 0;
}

