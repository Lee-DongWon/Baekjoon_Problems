#include <stdio.h>

int main() {
	int x;
	int num;
	int arr[6] = { 0 };

	scanf("%d", &x);

	if (x == 64) {
		num = 1;
	}
	else {
		num = 0;

		for (int i = 0; i < 6; i++) {
			arr[i] = x % 2;
			x = x / 2;
		}

		for (int i = 0; i < 6; i++) {
			if (arr[i] == 1) {
				num++;
			}
		}
	}



	printf("%d", num);

	return 0;
}