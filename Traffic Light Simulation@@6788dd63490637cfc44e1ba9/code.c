#include<stdio.h>
int main(){
    char i;
    scanf("%c",&i);
    switch(i){
        case('R'):
        printf("Stop");
        break;
        case('G'):
        printf("Go");
        break;
        case('Y'):
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
    }
}