#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d", year);
    } else {
        printf("%d", year);
    }

    return 0;
}
