#include<stdio.h>
int main(){
    int i,c=0;
    scanf("%d",&i);
    if( i==0){
        c =32;
    }
    else{
        while((i & 1)==0){
            
            c++;
            i>>=1;
        }
    }
    printf("%d",c);
}