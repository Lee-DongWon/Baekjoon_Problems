#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	while (1) {
		int arr[3] = { 0 };
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			return 0;
		}
		else if (arr[2] >= arr[0] + arr[1]) {
			printf("Invalid\n");
		}
		else if (arr[0] == arr[1] && arr[1] == arr[2]) {
			printf("Equilateral\n");
		}
		else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
			printf("Isosceles\n");
		}
		else {
			printf("Scalene\n");
		}
	}

	return 0;
}