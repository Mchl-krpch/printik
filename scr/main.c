#include <stdio.h>
extern void type();

int main () {
    type ("Hello %s!\n", "world");
    return 0;
}