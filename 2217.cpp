#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int n, max = 0;
	int *rope, *weight;

	scanf("%d", &n);

	rope = (int *)malloc(sizeof(int)*n);
	weight = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &rope[i]);
	}

	sort(rope, rope + n);

	for (int i = 0; i < n; i++) {
		weight[i] = rope[i] * (n - i);
		if (max < weight[i]) {
			max = weight[i];
		}
	}

	printf("%d\n", max);

	return 0;
}