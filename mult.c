#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    // Calculate the product
    product = a * b;

    // %.21f displays number up to 2 decimal point
    printf("product = 5.21f\n", product);
    return 0;
}
