// WAP to check whether entered number is even or odd

#include<stdio.h>

int main(){
    int num;
    printf("Enter an integer :");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("%d is Even",num);
    
    }   
    else{
        printf("%d is Odd",num);
    }
    return 0;
}