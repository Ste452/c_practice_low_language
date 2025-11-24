#include <stdio.h>

int main() {

    int x, y;
    
    printf("Test Data : ");
    scanf("%d %d", &x, &y);
    
    if (x == y) {
        printf("Number1 and Number2 are equal");
    } else {
        printf("Are not equal");
    }
}