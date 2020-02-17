#include <stdio.h>

#define bool int

bool isIntegerEqual(int a, int b) {
    return a == b;
}

int main() {
    int a = 2;
    int b = 2;
    if (isIntegerEqual(a, b)) {
        printf("they're equal");
    }
    else {
        printf("they're equal");
    }
    return 0;
}
