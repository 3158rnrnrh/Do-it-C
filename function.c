#include <stdio.h>

// Sum 함수 호출하기

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
	printf("함수를 호출하여 더하기를 한 결과값은 %d 이다\n\n\n", value);

	printf(" ========이제 함수에 대해 알았으니 혼자 만들어보자 =========  \n");
	int C;
	C = function1(9, 7);
	printf("첫번째 함수는 곱하기, 9 X 7 은 %d 이다\n\n", C);

	float C2;
	C2 = function2(C, 3.2847639);
	printf("두번째 함수는 빼기, 63 - 3.2847639 는 %.2f 이다\n\n", C2);

	printf("여기까지 오류없이 성공했다면 함수는 됐다");
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