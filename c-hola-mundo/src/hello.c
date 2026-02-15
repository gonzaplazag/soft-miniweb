#include <stdio.h>
#include "hello.h"

void say_hello(const char *name) {
    if (name && name[0] != '\0') {
        printf("Hola, %s!\n", name);
    } else {
        printf("Hola, mundo!\n");
    }
}