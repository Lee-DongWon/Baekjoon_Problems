#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool twosearch(int *exist, int left, int right, int searchNum) {
	int mid = (left + right) / 2;
	bool result;
	if (left > right) {
		return false;
	}
	else {
		if (exist[mid] > searchNum) {
			result = twosearch(exist, left, mid - 1, searchNum);
		}
		else if (exist[mid] < searchNum) {
			result = twosearch(exist, mid + 1, right, searchNum);
		}
		else {
			return true;
		}
	}

	return result;
}

int main() {
	int n, m, left, right;
	int *exist;
	int *find, *result;

	scanf("%d", &n);

	exist = (int *)(malloc(sizeof(int)*n));

	for (int i = 0; i < n; i++) {
		scanf("%d", &exist[i]);
	}

	sort(exist, exist + n);

	scanf("%d", &m);

	find = (int *)(malloc(sizeof(int)*m));
	result = (int *)(malloc(sizeof(int)*m));

	for (int i = 0; i < m; i++) {
		scanf("%d", &find[i]);

		left = 0;
		right = n - 1;
		if (twosearch(exist, left, right, find[i])) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}

	printf("\n");

	return 0;
}