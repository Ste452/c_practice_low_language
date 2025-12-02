#include <stdio.h>

int main () {
    
    float radius;
    float pi = 3.14159;

    printf("Enter the value radius to calculate the Area of the Circle: ");
    scanf("%f", &radius);   
    float area = pi * radius * radius;

    printf("\nThe Area of circle is %.5f * %.f * %.f = %.5f", pi, radius, radius, area);
}