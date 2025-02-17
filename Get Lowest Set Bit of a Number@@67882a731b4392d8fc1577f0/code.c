#include<stdio.h>
int main(){
    int n,j;
    scanf("%d",&j);
    for(n=0; n<=100; n++){
        if(j & (1<<n)){
            printf("%d",n);
        }
    }

    }

