#include <stdio.h>
int main(void)
{
	int quart;
	double num;
	printf("请输出水的夸脱数:");
	scanf("%d", &quart);
	num = quart* 950 * 3.0e-23;
	printf("%e", num);
}
