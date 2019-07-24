#include <stdio.h>

int main() {

	int a, b, c, result;
	int arr[10] = { 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	result = a * b*c;

	while (result != 0) {
		arr[(result % 10)]++;
		result = result / 10;
	}

	for (int i = 0; i <= 9; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}