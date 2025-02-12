#include<stdio.h>
int main(){
    int i,j,n,u=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ",u);
            u=u+1;
            
        }
        u++;

        printf("\n");
    }

}