#include <stdio.h>
int main()
{
	float f;
	printf("Enter a flaoting-point value:");
	scanf("%f", &f);
	printf("fixed-point notation: %f\n", f);
	printf("exponential notation: %e\n", f);
	printf("p notation: %f\n", f);
}
