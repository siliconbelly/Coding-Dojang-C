/*
* �ִ� ǥ���ϱ�
* ���� �ҽ� �ڵ带 �ϼ��Ͽ� 127 32767 2147483647 2147483647 9223372036854775807�� ��µǰ� ���弼��
* (Visual Studio, Windows)
*/

#include <stdio.h>
//______________
#include <limits.h>

int main()
{
	char num1 = CHAR_MAX;
	//short num2 = ________;
	short num2 = SHRT_MAX;
	int num3 = INT_MAX;
	long num4 = LONG_MAX;
	// long long num 5 = __________;
	long long num5 = LLONG_MAX;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	

	return 0;
}