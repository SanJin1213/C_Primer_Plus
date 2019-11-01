/* 4.7 复习题中  5*/
#include  <stdio.h>
// 引号的作用是 将war and peace 包起来，整体付给BOOK, 如果去除，会报错，book 会一个词的一个词的赋值， 
#define BOOK "War and Peace"

int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	// 取define的字符串 要用%s 
	// \" 是将 引号 转义正常输出 
	printf("This copy of \"%s\" sells for $ %.2f\n", BOOK, cost);
	printf("That is %.0f %% of list.\n", percent);
	printf("%s\n", BOOK); 
}
