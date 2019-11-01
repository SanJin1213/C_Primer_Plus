/* 3_7.c 厘米转换成英寸*/ 
#include <stdio.h>
int main(void)
{
	int tall, inches;
	printf("请输入您的身高(英寸）:");
	scanf("%d", &inches);
	tall = inches * 2.54;
	printf("您的身高是%d厘米", tall);
	
}


