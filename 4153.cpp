#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int arr[3] = { 0 };

	while (1) {
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			return 0;
		}
		else {
			sort(arr, arr + 3);
			if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1]) {
				printf("right\n");
			}
			else {
				printf("wrong\n");
			}
		}
	}
}