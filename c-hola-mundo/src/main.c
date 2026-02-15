#include <stdio.h>
#include "hello.h"

int main(int argc, char **argv) {
    const char *name = NULL;

    if (argc >= 2) {
        name = argv[1];
    }

    say_hello(name);

    // Mini demo de exit status (0 = ok)
    return 0;
}