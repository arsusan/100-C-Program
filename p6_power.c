// 6.Program to find power of a given number. Hint: pow(a,b), a and b are user inputs.
#include <math.h>
#include <stdio.h>

int main() {
    double a, b;
    double result;
    printf("Enter a base number: ");
    scanf("%lf", &a);
    printf("Enter an exponent: ");
    scanf("%lf", &b);

    // calculates the power
    result = pow(a, b);

    printf("%.1lf^%.1lf = %.2lf", a, b, result);
    return 0;
}
