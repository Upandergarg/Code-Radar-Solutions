#include<stdio.h>
int main(){
    int i=1,j,n;
    scanf("%d",&n);
    while(i<=n){
j=0;
        while(j<=n-i){
            
            printf("* ");
            j++;

        }
        printf("\n");

        i++;
    }
}