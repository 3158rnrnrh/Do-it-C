#include <stdio.h>

// Sum �Լ� ȣ���ϱ�

int Sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}

int function1(int a, int b);
float function2(float c, float d);

int main(void)
{
	int value = Sum(4, 5);
	printf("�Լ��� ȣ���Ͽ� ���ϱ⸦ �� ������� %d �̴�\n\n\n", value);

	printf(" ========���� �Լ��� ���� �˾����� ȥ�� ������ =========  \n");
	int C;
	C = function1(9, 7);
	printf("ù��° �Լ��� ���ϱ�, 9 X 7 �� %d �̴�\n\n", C);

	float C2;
	C2 = function2(C, 3.2847639);
	printf("�ι�° �Լ��� ����, 63 - 3.2847639 �� %.2f �̴�\n\n", C2);

	printf("������� �������� �����ߴٸ� �Լ��� �ƴ�");
	return 0;
}

int function1(int a, int b)
{
	int an = a * b;
	return an;
}

float function2(float c, float d)
{
	float an2 = c - d;
	return an2;
}