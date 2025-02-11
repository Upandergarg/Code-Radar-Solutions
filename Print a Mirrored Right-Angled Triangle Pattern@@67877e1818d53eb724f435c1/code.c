#include<stdio.h>
int main(){
int i=1,j,n;
scanf("%d",&n);
while(i<=n){
    j=1;
    while(j<=n-i){
        printf(" ");
        j++;
    }
    j=1;
    while(j<=i){
        printf("*");
        j++;

    }
    i++;
    printf("\n");
}
}