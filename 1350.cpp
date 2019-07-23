#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n, size, sum = 0;
	long long *file;
	long long result;

	scanf("%lld", &n);
	file = (long long *)malloc(sizeof(long long)*n);

	for (long long i = 0; i < n; i++) {
		scanf("%lld", &file[i]);
	}

	scanf("%lld", &size);

	for (long long i = 0; i < n; i++) {
		if (file[i] % size == 0) {
			sum += file[i] / size;
		}
		else {
			sum += file[i] / size + 1;
		}
	}

	printf("%lld\n", sum*size);

	return 0;
}