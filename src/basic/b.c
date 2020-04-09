#include <stdio.h>
#include "a.h"
#include "b.h"

void b1() {
    a1();
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = i + j + k + l + m;
    printf("b1() = %i\n", n);
}

void b2() {
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = i + j + k + l + m;
    printf("b2() = %i\n", n);
}

void b3() {
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = i + j + k + l + m;
    printf("b3() = %i\n", n);
}