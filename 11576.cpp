#include <iostream>

using namespace std;

int main() {
	int a, b, n, index = 0;
	int result = 0, temp = 1;

	cin >> a >> b;
	cin >> n;

	int *arr1 = new int[n];
	int arr2[25] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		result += temp * arr1[i];
		temp *= a;
	}

	while (result > 0) {
		arr2[index] = result % b;
		result /= b;
		index++;
	}

	for (int i = index - 1; i >= 0; i--) {
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}