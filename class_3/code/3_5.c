#include <stdio.h>
int main(void)
{
	int age;
	double seconds;
	printf("ÇëÊä³öÄúµÄÄêÁä:");
	scanf("%d", &age);
	seconds = age * 3.156e7;
	printf("%e", seconds);
}

