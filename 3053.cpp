#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main() {
	double r;
	double area1, area2;

	scanf("%lf", &r);

	area1 = r * r*M_PI;
	area2 = 2 * r*r;

	printf("%.6lf\n", area1);
	printf("%.6lf\n", area2);

	return 0;
}