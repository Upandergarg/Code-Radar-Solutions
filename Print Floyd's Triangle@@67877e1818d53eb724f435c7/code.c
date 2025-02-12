#include<stdio.h>
int main(){
    int i,j,n,u=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=0; j<=i; j++){
            printf("%d ",u);
            
        }
        u++;

        printf("\n");
    }

}