#include <stdio.h>

int main() {
	int n, temp, length = 0;
	int num[10] = { 0 };
	int i = 0;

	scanf("%d", &n);

	while (n / 10 >= 1) {
		num[length] = n % 10;
		n = n / 10;
		length++;
	}

	num[length] = n;

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int i = 0; i <= length; i++) {
		printf("%d", num[i]);
	}

	return 0;
}