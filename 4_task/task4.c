#include <stdio.h>
#include <math.h>
#include <locale.h>

void f(void);

double x, result;

void main()
{


	printf("Vvedite x:\n");
	scanf("%lf", &x);
	f();
	printf("f = %.4f\n", result);

	system("pause");

}

void f()
{
	result = (1-1/4*sqrt(sin(2*x))+cos(2*x)) ;
}