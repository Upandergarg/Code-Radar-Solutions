#include<stdio.h>
int main(){
    int n=0,j;
    scanf("%d",&j);
    while((j& (1<<n))==1){
        printf("%d",n);
        n++;
    }

}