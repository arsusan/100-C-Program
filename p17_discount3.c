// 17. Program to calculate discount
// a) If purchased amount is greater than or equal to 5000, discount is 10%
// b) If purchased amount is greater than or equal to 4000 and less than 5000, discount is 7%
// c) If purchased amount is greater than or equal to 3000 and less than 4000, discount is 5%
// d) If purchased amount is greater than or equal to 2000 and less than 3000, discount is 3%
// e) If purchased amount is less than 2000, discount is 2%
#include<stdio.h>
int main(){
    int amount, discount;
    printf("Enter purchase amount: ");
    scanf("%d",&amount);

    if(amount>=5000){
        discount = (amount*10)/100;
        amount = amount - discount;
    }else if (amount>=4000&&amount<=5000)
    {
        discount = (amount*7)/100;
        amount = amount - discount;
    }else if(4000<=amount && 3000>=amount){
        discount = (amount*5)/100;
        amount = amount - discount;
    }else if(3000<=amount&&2000>=amount){
       discount = (amount*3)/100;
        amount = amount - discount;
    }else if(2000>amount){
        discount = (amount*2)/100;
        amount = amount - discount;
    }
    printf("The final amoutn is: %d", amount);
    return 0;
}
