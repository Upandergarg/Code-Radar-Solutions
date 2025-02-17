// Your code here...
#include<stdio.h>
int main(){
    int i, c[100],ind;
    scanf("%d",&i);
    if(i==0){
        printf("0");
    }
        while (i > 0) {
        c[ind] = i % 2;  // Store the remainder (0 or 1)
        i = i/ 2;  // Divide the number by 2
        ind++;  // Move to the next index
    }
    
}