#include <stdio.h>
#define GALLON 3.758 //1 gallon=3.785 liters
#define MILE 1.609 //1 mile=1.609 kilometers


int main(void)
{
	// 声明变量类型 
	float mileage, gasoline, speed, speed_2;
	// 输入输出 
	printf("请输出里程数: ");
	scanf("%f", &mileage);
	printf("请输入汽油量: ");
	scanf("%f", &gasoline);
	// 计算 
	speed = gasoline / mileage;
	printf("速度为(加仑/英里): %.1f\n", speed);
	speed_2 = (gasoline * GALLON) / (mileage * MILE) * 100;
	printf("速度为(升/100公里): %.1f\n", speed_2);
	
} 
