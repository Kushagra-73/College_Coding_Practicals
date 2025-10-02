#include <stdio.h>

int main() {
    double operand_1, operand_2, result;
    char operator;

    printf("Enter the value of operand 1 and operand 2 respectively: ");
    scanf("%lf %lf", &operand_1, &operand_2);

    printf("Choose from the following operators ['+','-','*','/']: ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = operand_1 + operand_2;
            printf("Result: %.2lf\n", result);
            break;
        
        case '-':
            result = operand_1 - operand_2;
            printf("Result: %.2lf\n", result);
            break;
        
        case '*':
            result = operand_1 * operand_2;
            printf("Result: %.2lf\n", result);
            break;
        
        case '/':
            if (operand_2 != 0) {
                result = operand_1 / operand_2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}