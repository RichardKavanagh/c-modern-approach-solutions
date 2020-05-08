#include "stdio.h"

int main(void) {

    float loan, interest_rate, payment;
    printf("%s", "Enter amount of loan: ");
    scanf("%f", &loan);

    printf("%s", "Enter interest rate: ");
    scanf("%f", &interest_rate);
    
    printf("%s", "Enter monthly payment: ");
    scanf("%f", &payment);

    loan = loan - payment + (loan * interest_rate / 100.0f / 12.0f);
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan = loan - payment + (loan * interest_rate / 100.0f / 12.0f);
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = loan - payment + (loan * interest_rate / 100.0f / 12.0f);
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}

