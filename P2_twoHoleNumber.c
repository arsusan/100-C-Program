// 2.Program to add, subtract, multiply, and divide two whole numbers
#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, mult;  
    float div;  
  
    /* 
     * Read two numbers from user separated by comma 
     */  
    printf("Enter first number:  ");  
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);
  
    /* 
     * Performs all arithmetic operations 
     */   
    sum = num1 + num2;  
    sub = num1 - num2;  
    mult = num1 * num2;  
    div = (float)num1 / num2;  
  
    /* 
     * Prints the result of all arithmetic operations 
     */  
    printf("\nThe sum of the given numbers : %d\n ", sum);  
    printf("The difference of the given numbers : %d\n ", sub);  
    printf("The product of the given numbers : %d\n ", mult);  
    printf("The quotient of the given numbers : %f\n ", div);  
    
    return 0;   
} 
