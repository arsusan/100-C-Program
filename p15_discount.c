// 15. Program to calculate discount. If purchased amount is greater than or equal to 1000, 
// discount is 5%.
#include<stdio.h>
int main()
{

    int amount, discount=5;
    printf("Enter purchase amount: ");
    scanf("%d", &amount);

    if(amount>=1000)
    {
        discount = (amount * discount)/100;
        amount = amount - discount;

    }
    printf("The final amount is: %d \n",amount);
    return 0;
}
