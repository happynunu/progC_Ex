#include <stdio.h>

int sum(int v1, int v2)
{
	int result;
	result = v1 + v2;
	return result;
}

void main()
{
	int hap;
	hap = sum(100, 200);
	printf("100�� 200�� sum() �Լ� ����� : %d\n", hap);
}