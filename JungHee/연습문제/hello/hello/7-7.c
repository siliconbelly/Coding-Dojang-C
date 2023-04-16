/*
	정수형 변수 선언과 오버 플로우
	다음 소스 코드를 완성하여 0 0 -9223372036854775808이 출력되게 만드세요.
*/

#include <stdio.h>

int main()
{
	// __________ num1 = 256;
	// __________ num2 = 65536;
	// __________ num3 = 9223372036854775808;

	unsigned char num1 = 256;
	unsigned short num2 = 65536;
	long long num3 = 9223372036854775808;

	printf("%u %u %lld", num1, num2, num3);

	return 0;
}