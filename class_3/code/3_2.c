#include<stdio.h>
int main(void)
{
	char ch;
	printf("请输入数字: ");
	scanf("%d", &ch);
	// %s 代表字符串，%c 单个字符 
	printf("%d 的ASCII is %c ", ch, ch);
	return 0;
}
