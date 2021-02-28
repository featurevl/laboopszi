#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x) {
	return (1-1/4*sqrt(sin(2*x))+cos(2*x));
}

int main()
{

	double x;

	printf("Vvedite x:\n");
	scanf("%lf", &x);

	printf("x = %.4f\n", x);
	printf("f = %.4f\n", f(x));

	system("pause");

	return 0;
    }
