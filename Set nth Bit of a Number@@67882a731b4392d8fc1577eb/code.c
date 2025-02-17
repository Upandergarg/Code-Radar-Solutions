#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    // Set the nth bit to 1 using bitwise OR
    a = a | (1 << n);

    // Print the modified number
    printf("%d\n", a);

    return 0;
}



