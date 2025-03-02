#include <stdio.h>
#include <ctype.h>

int main() {
    char i;
    scanf("%c", &i);

    if (islower(i)) {  // Correct function to check lowercase
        printf("Lowercase");
    } else if(isupper(i)){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }

    return 0;
}
