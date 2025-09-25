// WAP to calculate the area and circumference of a circle 

#include<stdio.h>

int main(){
    float radius,circumference,area,PIE = 3.1415;
    printf("Enter the radius of the Circle :");
    scanf("%f",&radius);
    area = PIE * radius * radius;
    circumference = 2 * PIE * radius;
    printf("The area and the circumference of the circle are %.2f and %.2f respectively ",area,circumference);
    return 0;
}