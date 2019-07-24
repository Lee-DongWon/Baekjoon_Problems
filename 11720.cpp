#include <stdio.h>

int main() {
	int n, sum = 0;
	int array[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &array[i]);
	}
	for (int i = 0; i < n; i++) {
		sum = sum + array[i];
	}
	printf("%d", sum);
	return 0;
}