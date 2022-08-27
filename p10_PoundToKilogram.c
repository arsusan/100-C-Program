//10.  Program to convert pounds to kilograms.
#include<stdio.h>  
  
int main()  
{  
    const float KG = 0.453592;  
        float pound;  
  
    printf("\nEnter weight in pounds: ");  
    scanf("%f", &pound);  
  
    printf("Weight in Kilograms is %f: \n", (pound * KG) );  
  
    return 0;  
}  