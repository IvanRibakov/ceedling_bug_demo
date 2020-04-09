#include <stdio.h>
#include "b.h"
#include "c.h"

void c1() {
    b1();
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = i + j + k + l + m;
    printf("c1() = %i\n", n);
}

void c2() {
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = i + j + k + l + m;
    printf("c2() = %i\n", n);
}

void c3() {
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = i + j + k + l + m;
    printf("c3() = %i\n", n);
}