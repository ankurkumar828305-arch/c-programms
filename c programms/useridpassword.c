#include <stdio.h>
#include <string.h>

void main() {
    char a[20], b[20];
    
    printf("Enter userid and password: ");
    // The space before the first %s is VERY important
    scanf("%s%s",&a,&b); 

    if (strcmp(a, "ankursinha") == 0 && strcmp(b, "982298") == 0) {
        printf("welcome ankur sinha\n");
    } else {
        printf("invalid id password\n");
    }
}