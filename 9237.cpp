#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int n, temp, max = 0;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n, desc);

	for (int i = 0; i < n; i++) {
		arr[i] += i + 1;
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%d\n", max + 1);

	return 0;
}