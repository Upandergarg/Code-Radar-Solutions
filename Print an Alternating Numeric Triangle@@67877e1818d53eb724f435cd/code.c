#include<stdio.h>
int main(){
    int i,j,n;
    char r= 'A';
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            printf("%c ",r);
            r++;
        }
        r='A';
        printf("\n");
    }

}