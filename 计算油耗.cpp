#include<stdio.h>
#define DALLON_TO_LITRE 3.785//1加仑等于3.785升
#define MILE_TO_KM 1.609//1英里等于1.609km

int main()
{
	float range, oil;
	printf("输入航行里程（英里):");
	scanf_s("%f", &range);
	printf("输入消耗汽油（加仑）:");
	scanf_s("%f", &oil);
	printf("美式耗油量为 %.1f M/G\n", range / oil);
	printf("欧式耗油为 %.1f l/100km", (oil * DALLON_TO_LITRE ) / (range * MILE_TO_KM/100));
	return 0;
}