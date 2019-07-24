#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool search(int left, int right, int num, int *arr1) {
	int mid = (left + right) / 2;
	bool result;

	if (left > right) {
		return false;
	}
	else {
		if (arr1[mid] > num) {
			result = search(left, mid - 1, num, arr1);
		}
		else if (arr1[mid] < num) {
			result = search(mid + 1, right, num, arr1);
		}
		else {
			return true;
		}
	}

	return result;

}



int main() {
	int n, m;

	scanf("%d", &n);

	int *arr1 = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}

	sort(arr1, arr1 + n);



	scanf("%d", &m);

	int *arr2 = (int *)malloc(sizeof(int)*m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
	}



	for (int i = 0; i < m; i++) {
		int left = 0, right = n - 1;

		if (search(left, right, arr2[i], arr1)) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}


	return 0;

}