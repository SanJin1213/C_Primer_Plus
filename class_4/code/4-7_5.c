/* 4.7 ��ϰ����  5*/
#include  <stdio.h>
// ���ŵ������� ��war and peace �����������帶��BOOK, ���ȥ�����ᱨ��book ��һ���ʵ�һ���ʵĸ�ֵ�� 
#define BOOK "War and Peace"

int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	// ȡdefine���ַ��� Ҫ��%s 
	// \" �ǽ� ���� ת��������� 
	printf("This copy of \"%s\" sells for $ %.2f\n", BOOK, cost);
	printf("That is %.0f %% of list.\n", percent);
	printf("%s\n", BOOK); 
}
