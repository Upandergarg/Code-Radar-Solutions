#include<stdio.h>
#include<string.h>
int main(){
    char i ;
    scanf("%c",&i);
    if(islower(i)){
        printf("Lowercase");

    }
    else{
        printf("Uppercase");
    }
}