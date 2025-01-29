#include <stdio.h>



int main() {
    int u,n,i;
    float avg;
    scanf("%d%d%d",&u,&n,&i);
    avg= (u+n+i)/3.0;
    printf("Average: %.2f", avg);
    return 0;
}