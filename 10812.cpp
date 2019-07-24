#include <iostream>
#include <cstdio>

using namespace std;

void changeOrder(int i, int j, int k, int *arr, int *result) {
	for (int n = i; n <= i + j - k; n++) {
		result[n] = arr[k + (n - i)];
	}

	for (int n = i + j - k + 1; n <= j; n++) {
		result[n] = arr[n - j + k - 1];
	}
	return;
}

int main() {
	int n, m;
	int arr[101] = { 0 };
	int result[101] = { 0 };
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= 100; i++) {
		arr[i] = i;
		result[i] = i;
	}

	while (m--) {
		int i, j, k;
		scanf("%d %d %d", &i, &j, &k);
		changeOrder(i, j, k, arr, result);
		for (int x = 1; x <= n; x++) {
			arr[x] = result[x];
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", result[i]);
	}
	printf("\n");

	return 0;
}