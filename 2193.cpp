#include <stdio.h>

int main() {
	int n;
	long long int result;
	long long int finish_0[91] = { 0 };
	long long int finish_1[91] = { 0 };

	finish_0[0] = 0;
	finish_0[1] = 1;
	finish_1[0] = 1;
	finish_1[1] = 0;

	for (int i = 2; i < 91; i++) {
		finish_0[i] = finish_1[i - 1] + finish_0[i - 1];
		finish_1[i] = finish_0[i - 1];
	}

	scanf("%d", &n);

	result = finish_0[n - 1] + finish_1[n - 1];

	printf("%lld\n", result);

	return 0;
}