#include<stdio.h>
int main() {
    int j;
    scanf("%d", &j);

    int l = j & -j;  // Isolate the lowest set bit
    int p = 0;  // Initialize the position variable

    // Shift the bit to the right until it becomes 1
    while (l > 1) {
        l >>= 1;  // Right shift by 1
        p++;      // Increment the position
    }

    printf("%d", p);  // Print the position of the lowest set bit

    return 0;
}


