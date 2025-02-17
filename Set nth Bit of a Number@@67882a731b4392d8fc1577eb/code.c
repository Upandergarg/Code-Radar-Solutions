#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a& (1<<n-1))==1){
        printf("%d",a);
    }
    else{
        printf("%d", a | (1<<n-1));
    }
}


