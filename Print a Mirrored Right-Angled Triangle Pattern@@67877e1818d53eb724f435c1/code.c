#include<stdio.h>
int main(){
int i,j,n;
scanf("%d",&n);
while(i<=n){
    j=1;
    while(j<=n-i-1){
        printf(" ");
        j++;
    }
    while(j<=i){
        printf("*");
        j++;

    }
    i++;
    printf("\n");
}
}