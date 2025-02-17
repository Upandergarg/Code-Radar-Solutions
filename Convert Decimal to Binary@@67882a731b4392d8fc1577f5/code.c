#include<stdio.h>

int main() {
    int i, c[100], ind = 0;  // Initialize ind to 0
    scanf("%d", &i);

    if (i == 0) {
        printf("0");
    } else {
        // Convert the decimal number to binary
        while (i > 0) {
            c[ind] = i % 2;  // Store the remainder (0 or 1)
            i = i / 2;  // Divide the number by 2
            ind++;  // Move to the next index
        }

        // Print the binary digits in reverse order
        for (int j = ind - 1; j >= 0; j--) {
            printf("%d", c[j]);
        }
    }

    printf("\n");
    return 0;
}
