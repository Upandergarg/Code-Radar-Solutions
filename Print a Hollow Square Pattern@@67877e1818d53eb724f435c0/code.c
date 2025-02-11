#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    while(i<n){
        if (i==0 || i==n-1){
            j=1
            while(j<=n){
                printf("*");
                j++;
            }
        }
        if(j==1 || j==n){
            while(j<=1){
                printf("*");
            }
        }
    }
}