#include <stdio.h>
int main(void)
{
	int quart;
	double num;
	printf("�����ˮ�Ŀ�����:");
	scanf("%d", &quart);
	num = quart* 950 * 3.0e-23;
	printf("%e", num);
}
