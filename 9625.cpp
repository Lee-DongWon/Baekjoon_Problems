#include <stdio.h>

int main() {
	int arrA[50] = { 0 }, arrB[50] = { 0 };
	int n;

	arrA[0] = 1;
	arrB[0] = 0;

	for (int i = 1; i < 46; i++) {
		arrA[i] = arrB[i - 1];
		arrB[i] = arrA[i - 1] + arrB[i - 1];
	}



	scanf("%d", &n);

	printf("%d %d", arrA[n], arrB[n]);

	return 0;
}