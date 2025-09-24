#include <stdio.h>
int main() {
    int divided, divisor, quotient, remainder;
    printf("enter divided: ");
    scanf("%d", &divided);
    printf("enter divisor: ");
    scanf("%d", &divisor);

    // computes quotent
    quotient = divided / divisor;

    //computes remainder
    remainder = divided % divisor;

    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
    return 0;
}