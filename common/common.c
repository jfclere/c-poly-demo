#include "module1.h"
#include "module2.h"

#ifdef TYPE
void inc_poly(void* m) {
    ((TYPE *) m)->counter++;
}
#endif

