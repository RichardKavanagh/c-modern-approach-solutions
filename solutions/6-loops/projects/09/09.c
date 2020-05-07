#include "stdio.h"

int main(void) {

    int payments;
    float loan, interest_rate, payment;

    printf("%s", "Enter amount of loan: ");
    scanf("%f", &loan);
    printf("%s", "Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("%s", "Enter monthly payment: ");
    scanf("%f", &payment);
    printf("%s", "Enter total payments: ");
    scanf("%d", &payments);

    for (int i = 1; i <= payments; ++i) {

        loan = loan - payment + (loan * interest_rate / 100.0f / 12.0f);
        printf("Balance remaining after first payment: $%.2f\n", loan);

        if (loan < payment) {
            i++;
            printf("%s\n", "Last monthly payment");
            printf("%s%d%s%.2f%s\n", "You only needed ", i ," payments, you paid ", (payment - loan), " in excess.");
            break;
        }
    }
    return 0;
}