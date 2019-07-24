#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, price;
	int result = 0;

	scanf("%d %lld", &n, &price);

	int *coin = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		result += price / coin[i];
		price %= coin[i];
	}

	printf("%d", result);

	return 0;
}