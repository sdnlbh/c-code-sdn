#include<stdio.h>
#define DALLON_TO_LITRE 3.785//1���ص���3.785��
#define MILE_TO_KM 1.609//1Ӣ�����1.609km

int main()
{
	float range, oil;
	printf("���뺽����̣�Ӣ��):");
	scanf_s("%f", &range);
	printf("�����������ͣ����أ�:");
	scanf_s("%f", &oil);
	printf("��ʽ������Ϊ %.1f M/G\n", range / oil);
	printf("ŷʽ����Ϊ %.1f l/100km", (oil * DALLON_TO_LITRE ) / (range * MILE_TO_KM/100));
	return 0;
}