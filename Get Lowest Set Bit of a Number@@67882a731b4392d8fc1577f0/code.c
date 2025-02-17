#include<stdio.h>
int main(){
    int n,j;
    scanf("%d",&j);
    int l= j & -j;
    int p;
    while (l>1){
        l << =1;
        p++;
    }
    printf("%d",p);


    }

