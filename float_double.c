#include <stdio.h>
int main()
{
	float var1 = 3.1415926535897932;
	double var2 = 3.1415926535897932;
	long double var3 = 3.1415926535897932;
	
	printf("%ld\n", sizeof(float));
	printf("%ld\n", sizeof(double));
	printf("%ld\n", sizeof(long double));
	printf("%.16f\n", var1);
	printf("%.16f\n", var2);
	printf("%.21Lf\n", var3);
}
