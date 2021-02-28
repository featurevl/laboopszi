#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x);

void main()
{
	

	double x;

	printf("Vvtdite x:\n");
	scanf("%lf", &x);

	printf("x = %f\n", x);
	printf("f = %f\n", f(x));

	system("pause");
}

