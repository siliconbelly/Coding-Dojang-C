/*
	�Ǽ��� ���� �����ϱ�
	���� �ҽ� �ڵ带 �ϼ��Ͽ� 1.970000 5.524218 37928000.000000�� ��µǰ� ���弼��.
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