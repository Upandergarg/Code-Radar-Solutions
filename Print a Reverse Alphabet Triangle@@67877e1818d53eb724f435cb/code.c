#include<stdio.h>
int main() {
    int i,j,n;
    char u= 'A';
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf("%c ",u);
            u++;
        }
        u = 'A';
        printf("\n");
    }
}