// 9.Program to find price of n mangos given the price of a dozen mangos.
#include<stdio.h>
int main()
{
    int mangos;
    printf("\nEnter the price of dozen mangos: ");
    scanf("%d", &mangos);

    int n_price = mangos / 12;
    printf("The price of the n mangos is: %d\n", n_price);
    return 0;
}