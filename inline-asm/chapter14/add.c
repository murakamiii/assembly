#include <stdio.h>

// clang -o bin/add add.c && bin/add
// clang -S -o bin/add.S add.c

long long int addValues(long long int val1, long long int val2) {
    long long int result;
    __asm (
        "ADD %[Rd], %[Rs1], %[Rs2]"
        : [Rd] "=r" (result)
        : [Rs1] "r" (val1), [Rs2] "r" (val2)
    );
    return result;
}

int main() {
    long long int val = addValues(2, 5);
    printf("addValues = %lld\n", val);
    return 0;
}