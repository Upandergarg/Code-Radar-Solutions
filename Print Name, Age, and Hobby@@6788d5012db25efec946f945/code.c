#include <stdio.h>


int main() {
    int age;
    char name[100], hobby[100];
    scanf("%s",&name);
    scanf("%d",&age);
    printf("\n");
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}