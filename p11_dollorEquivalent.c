// 11. Program to find the rupee equivalent of U.S. dollars.
#include <stdio.h>

int main(void) {
	float dollars;

	printf("Please enter dollars:");
	scanf("%f", &dollars);

	float rupees = dollars * 121;

	printf(" %f Nepali Rupees", rupees);
}