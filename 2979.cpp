#include <stdio.h>

int main() {
	int time[100] = { 0 };
	int price = 0;
	int x, y, z;

	scanf("%d %d %d", &x, &y, &z);

	for (int i = 0; i < 3; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		for (int j = a; j < b; j++) {
			time[j]++;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (time[i] == 1) {
			price += x;
		}
		else if (time[i] == 2) {
			price += 2 * y;
		}
		else if (time[i] == 3) {
			price += 3 * z;
		}
	}

	printf("%d\n", price);

	return 0;
}