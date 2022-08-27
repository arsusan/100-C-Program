// 4. Program to convert a temperature given in Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float c, f;
    
    // c - To store the celsius
    // f - To store the fahrenheit

    printf("Enter the temperature in Celsius::\n");
    scanf("%f", &c);

    /* celsius to fahrenheit conversion formula */
    f = (c * 9 / 5) + 32;

    // Final Output
    printf("\n%f Celsius = %f Fahrenheit\n", c, f);
    return 0;
}