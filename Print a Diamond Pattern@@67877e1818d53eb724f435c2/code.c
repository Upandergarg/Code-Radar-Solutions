// Your code here...
#include<stdio.h>
int main(){
    int i=0,j,n;
    scanf("%d",&n);
    while(i<n){
        j=1;
        while(j<=n-i-1){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i+1){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    i=i+1;
    int u=0,d;
        while(u<n-1){
        d=0;
        while(d<=u){
            printf(" ");
            d++;
        }
        d=0;
        while(d<2*(n-u)-3){
            printf("*");
            d++;
        }
        u++;
        printf("\n");
    }
}