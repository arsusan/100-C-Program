// 13. Program to sum the digits of a positive integer which is 5 digits long.
#include <stdio.h>
int main(){
    int num;
    printf("Enter the 5 positive integer: ");
    scanf("%d",&num);
    int sum = 0;
   
    while(num != 0){
        sum += num % 10;
        num = num/10;
    }
    printf("Digit sum: %d", sum);
}