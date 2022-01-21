/* calculates the remaining balance on a loan after the first, second, and third payments */

#include <stdio.h>

int main (void) {
    float loan, interest, payment, balance_one, balance_two, balance_three;

    printf("Enter amount of loan:\n");
    scanf("%f", &loan);
    printf("Enter interest rate:\n");
    scanf("%f", &interest);
    printf("Enter monthly payment:\n");
    scanf("%f", &payment);

    balance_one = loan - payment + (loan * interest / 12.0 / 100.0);
    balance_two = loan - 2.0 * payment + 2.0 * (loan * interest / 12.0 / 100.0);
    balance_three = loan - 3.0 * payment + 3.0 * (loan * interest / 12.0 / 100.0);

    printf("Balance remaining after first payment: %.2f\nBalance remaining after second payment: %f.2\nBalance remaining after third payment: %.2f\n", balance_one, balance_two, balance_three);

    return 0;
}
