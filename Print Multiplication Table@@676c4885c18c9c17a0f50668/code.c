// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d x %d = %d",n,i,i*n);
    }
    printf("\n");
}