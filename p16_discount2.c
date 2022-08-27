// 16. Program to calculate discount. If purchased amount is greater than or equal to 1000, 
// discount is 5%. If purchased amount is less than 1000, discount is 3%.
#include<stdio.h>
int main(){
    int amount, discount;
    printf("Enter purchase amount: ");
    scanf("%d",&amount);

    if(amount>=1000){
        discount = (amount*5)/100;
        amount = amount - discount;
    }else if (amount<1000)
    {
        discount = (amount*3)/100;
        amount = amount - discount;
    }
    printf("The final amoutn is: %d", amount);
    return 0;
}