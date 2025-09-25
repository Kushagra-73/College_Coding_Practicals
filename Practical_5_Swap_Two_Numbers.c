#include <stdio.h>
int main(){
    int a ,b,temp;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    
    temp = a;
    a = b;
    b = temp;
    printf("After swaping the first number is :%d\n",a);

    printf("After swaping the second number is :%d",b);
    return 0;
}