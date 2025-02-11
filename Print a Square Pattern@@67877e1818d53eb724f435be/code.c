#include<stdio.h>
int main(){
    int i=1,j,n;
    scanf("%d",&n);
    while(i<=n){
        j=1;
        while(j<=n){
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
}