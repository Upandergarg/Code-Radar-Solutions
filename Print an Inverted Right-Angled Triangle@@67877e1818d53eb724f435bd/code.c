#include<stdio.h>
int main(){
    int i=1,j,n;
    scanf("%d",&n);
    while(i<=n){

        while(j<=n-i+1){
            j=0;
            printf("* ");
            j++;

        }

        i++;
    }
}