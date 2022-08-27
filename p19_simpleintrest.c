// 19. Program to calculate the simple interest.
// a) If balance is greater than 99999, interest is 7 %.
// b) If balance is greater than or equal to 50000 and less than 100000 interest is 5 %.
// c) If balance is less than 50000, interest is 3%.
#include <stdio.h>

int main()
{
    float principle, time, rate, SI;

    /* Input principle, rate and time */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    if(principle>99999){
        rate = 7;
    }else if(principle>=50000&&principle<100000){
        rate = 5;
    }else if(principle<50000){
        rate = 3;
    }
    /* Calculate simple interest */
    SI = (principle * time * rate) / 100;

    /* Print the resultant value of SI */
    printf("Simple Interest = %f", SI);

    return 0;
}