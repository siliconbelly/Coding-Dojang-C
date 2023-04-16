/*
	자료형 크기 구하기
	다음 소스 코드를 완성하여 자료형의 크기가 8과 4로 출력되게 만드세요.
*/

#include <stdio.h>

int main()
{
	// __________ num1 = 0.4284;
	// __________ num2 = 2.7f;

	double num1 = 0.4284;
	float num2 = 2.7f;

	printf("num1의 크기: %d, num2의 크기: %d\n", sizeof(num1), sizeof(num2));

	return 0;
}