// WAP to print the sum of all numbers up to a given number

#include <stdio.h>

int main(){
    int num;
    printf("Enter upto which number you want the sum :");
    scanf("%d",&num);
    // METHOD 1 Using For Loop 
    // int sum = 0;
    // for (int i = 1; i<=num ; i++){
    //     sum=sum+i;
    // }

    // METHOD 2 Using formula
    int sum = (num*(num+1))/2;
    printf("The Sum upto number %d is %d",num,sum);
    return 0;
}
