/*
	�ּڰ��� �ִ� ǥ���ϱ�
	���� �ҽ� �ڵ带 �ϼ��Ͽ� �Ǽ� �ڷ����� �ּڰ��� �ִ��� ��µǰ� ���弼��.
	(Visual Studio, Windows)
*/

#include <stdio.h>
// ______________
#include <float.h>

int main()
{
	float num1 = FLT_MAX;
	// double num2 = _______________;
	// long double num3 = _______________;
	double num2 = DBL_MIN;
	long double num3 = LDBL_MAX;

	printf("%.2f\n", num1);
	printf("%e\n", num2);
	printf("%Le\n", num3);

	return 0;
}

/* 
������
340282346638528859811704183484516925440.00
2.225074e-308
1.797693e+308

*/