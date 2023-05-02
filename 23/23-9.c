#include <stdio.h>

int main() {
    unsigned long long num;
    scanf("%llu", &num);
    printf("%llu\n", num <<20 >>4);
}