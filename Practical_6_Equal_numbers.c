// WAP to check if two numbers are equal or not

#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);
    if (num1==num2){
        printf("First Number is Equal to the Second number");
    }
    else{
        printf("The numbers are not equal");
    }
    return 0;
}