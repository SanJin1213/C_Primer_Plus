#include <stdio.h>
#define GALLON 3.758 //1 gallon=3.785 liters
#define MILE 1.609 //1 mile=1.609 kilometers


int main(void)
{
	// ������������ 
	float mileage, gasoline, speed, speed_2;
	// ������� 
	printf("����������: ");
	scanf("%f", &mileage);
	printf("������������: ");
	scanf("%f", &gasoline);
	// ���� 
	speed = gasoline / mileage;
	printf("�ٶ�Ϊ(����/Ӣ��): %.1f\n", speed);
	speed_2 = (gasoline * GALLON) / (mileage * MILE) * 100;
	printf("�ٶ�Ϊ(��/100����): %.1f\n", speed_2);
	
} 
