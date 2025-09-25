/*WAP that accepts the temperature in Centigrade and converts
  into Fahrenheit using the formula C/5 = (F-32)/9 */ 


#include <stdio.h>

int main(){
    float Centigrade;
    printf("Enter the Temperature in Centigrade :");
    scanf("%f",&Centigrade);
    float Fahrenheit = (9*Centigrade/5)+32;
    printf("The temperature in Fahrenheit is %.2f",Fahrenheit);
    return 0;
}