#include<stdio.h>
int main{
    int i=0,j,n;
    scanf("%d",&n);
    while(i<n){
        j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i+1)
        printf("*");
        j++;
    }
    i++;
    printf("\n");
    
}