// Your code here...
#include<stdio.h>
int main(){
    int i=0,j,n;
    scanf("%d",&n);
    while(i<n){
        j=1;
        while(j<=n-i){
         printf("%d",j);
         j++;
        }
        i++;
        printf("\n");
    }
}