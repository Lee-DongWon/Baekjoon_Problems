#include <stdio.h>



int main() {

	double rifle, eye, ear, arm, leg, sum = 0;

	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf", &rifle, &eye, &ear, &arm, &leg);
		sum = rifle * 350.34 + eye * 230.90 + ear * 190.55 + arm * 125.30 + leg * 180.90;
		printf("$%.2lf\n", sum);
	}
}