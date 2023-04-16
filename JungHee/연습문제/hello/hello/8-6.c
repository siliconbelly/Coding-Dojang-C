/*
	실수형 변수 선언하기
	다음 소스 코드를 완성하여 1.970000 5.524218 37928000.000000이 출력되게 만드세요.
*/

#include <stdio.h>

int main()
{
	// ________ num1 = 1.97f;
	// ________ num2 = 5.524218l;
	// ________ num3 = 3792.8e+4;

	float num1 = 1.97f;
	long double num2 = 5.524218l;
	double num3 = 3797.8e+4;

	printf("%f %Lf %f\n", num1, num2, num3);

	return 0;
}