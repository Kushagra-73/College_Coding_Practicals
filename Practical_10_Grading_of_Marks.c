// WAP that accepts the marks of five subjects and find percentage and prints grades 
// according to A,B,C,D

#include<stdio.h>

int main(){
    int Sub1,Sub2,Sub3,Sub4,Sub5;
    printf("Enter marks of subjects repectively out of 100 :");
    scanf("%d %d %d %d %d ",&Sub1,&Sub2,&Sub3,&Sub4,&Sub5);
    
    float Percentage = (Sub1 + Sub2 + Sub3 + Sub4 + Sub5)/5.0;

    if (Percentage>=90){
        printf("Grade A");
    }
    else if (Percentage<90 && Percentage>=80){
        printf("Grade B");
    }
    else if (Percentage<80 && Percentage>=70){
        printf("Grade C");
    }
    else{
        printf("Grade D");
    }

    return 0 ;
}