/*
Name: DAVY KIPKOSGEI KOECH 
REG NO: PA106/G/28748/25
DESCRIPTION: Qualification for a loan
*/
#include <stdio.h>
int main() {
    int age, annual_income;
    printf("\nEnter your age (in years): ");
    scanf("%d", &age);
    printf("Enter your annual income (in shillings): ");
    scanf("%d", &annual_income);
    if (annual_income >= 21000 && age >= 22) {
        printf("\nCongratulations, You qualify for a loan.\n");
    } else {
        printf("\nUnfortunately, you can't qualify for a loan at this time.\n");
    }
    return 0;
}
    v
