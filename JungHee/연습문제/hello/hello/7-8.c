/*
* �ڷ��� ũ�� ���ϱ�
* ���� �ҽ� �ڵ带 �ϼ��Ͽ� 14�� ��µǰ� ���弼��.
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