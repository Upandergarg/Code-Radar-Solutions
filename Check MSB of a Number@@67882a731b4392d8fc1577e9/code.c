#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if( i & (1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

}