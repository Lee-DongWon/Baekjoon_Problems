#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a = 0, b = 0;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) {
			a++;
		}
		else {
			b++;
		}
	}

	if (a > b) {
		printf("Junhee is cute!");
	}
	else {
		printf("Junhee is not cute!");
	}

	return 0;
}