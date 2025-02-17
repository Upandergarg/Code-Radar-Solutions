#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Convert the input bit position (1-based) to 0-based
    b = b - 1;

    // Check if the nth bit is 1
    if ((a & (1 << b)) != 0) {
        printf("%d\n", a);  // nth bit is already 1
    } else {
        // Set the nth bit to 1
        a = a | (1 << b);
        printf("%d\n", a);
    }

    return 0;
}


