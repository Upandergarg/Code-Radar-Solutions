#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    // Swap using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d", a, b);

    return 0;
}
