#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{


	double x, f;

	x = 5;
	f = (1-1/4*sqrt(sin(2*x))+cos(2*x));

	printf("x = %.4f\n", x);
	printf("f = %.4f\n", f);

	printf("Vvedite x:\n");

	scanf("%lf", &x);
	f = (1-1/4*sqrt(sin(2*x))+cos(2*x));

	printf("x = %.4f\n", x);
	printf("f = %.4f\n", f);

	system("pause");

	return 0;
}
