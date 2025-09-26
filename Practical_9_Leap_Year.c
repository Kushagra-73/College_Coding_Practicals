// WAP that tells whether a given year is leap year or not

#include <stdio.h>

int main() {
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);

    if (year > 999 && year < 10000) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year\n", year);
        } else {
            printf("%d is not a leap year\n", year);
        }
    } else {
        printf("Enter a 4-digit year\n");
    }
    return 0;
}