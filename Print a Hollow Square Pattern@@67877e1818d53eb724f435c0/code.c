#include <stdio.h>

int main() {
    int i = 0, j, n;
    scanf("%d", &n);

    while (i < n) {
        j = 1;  

        while (j <= n) {
            if (i == 0 || i == n - 1 || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");  
            }
            j++;
        }

        printf("\n");  
        i++;
    }

    return 0;
}