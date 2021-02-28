#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x);

int main()
{


	double x;

	printf("Vvedite x:\n");
	scanf("%lf", &x);

	printf("x = %f\n", x);
	printf("f = %f\n", f(x));

	system("pause");

	return 0;
}

double f(double x) {
	return (1-1/4*sqrt(sin(2*x))+cos(2*x));
}