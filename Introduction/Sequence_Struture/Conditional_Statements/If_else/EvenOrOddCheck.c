#include <stdio.h>
#include <math.h>

int main(void) {

    int x;

    printf("Test Data: ");
    scanf("%d", &x);

    if (fmod(x, 2) == 0) {
        printf("%d is an even Integer", x);
    } else {
        printf("%d is an odd Integer", x);
    }

    return 0;
}
