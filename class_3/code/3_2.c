#include<stdio.h>
int main(void)
{
	char ch;
	printf("����������: ");
	scanf("%d", &ch);
	// %s �����ַ�����%c �����ַ� 
	printf("%d ��ASCII is %c ", ch, ch);
	return 0;
}
