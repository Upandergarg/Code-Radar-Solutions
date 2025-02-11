#include<stdio.h>
int main(){
    int i=0,j,n;
    scanf("%d",&n);
    while(i<n){
        j=1;
        while(j<=i){
            printf("%d",j);
        }
        i++;
        printf("\n");
    }
}