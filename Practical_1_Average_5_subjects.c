// Practical 1 - Calculate the average of marks of 5 subjects

#include <stdio.h>

int main(){
    int M1,M2,M3,M4,M5;
    printf("Enter the Marks of M1, M2, M3, M4 and M5 respectively : ");
    scanf("%d %d %d %d %d",&M1,&M2,&M3,&M4,&M5);
    float avg = ((float) M1 + M2 + M3 + M4 + M5)/5;     // Doing typecasting as it is doing integer division
    printf("The average value of marks of 5 subjects are : %.2f",avg);   //%.2f for making result in 2 decimal places
    return 0;
}