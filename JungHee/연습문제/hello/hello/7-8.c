/*
* 자료형 크기 구하기
* 다음 소스 코드를 완성하여 14가 출력되게 만드세요.
*/

#include <stdio.h>

int main()
{
	// __________ num1;
	// __________ num2;

	short num1; // 2byte
	long long num2; // 8byte

	// sizeof(int) // 4byte

	/*
	* unsigned short num1;
	* unsigned long long num2;
	*/

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));

	return 0;
}