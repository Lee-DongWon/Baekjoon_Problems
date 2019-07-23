#include <iostream>

using namespace std;

int main() {
	int n;
	int arr[100] = { 0 };
	int arr_0[41] = { 0 };
	int arr_1[41] = { 0 };

	arr_0[0] = 1;
	arr_0[1] = 0;

	arr_1[0] = 0;
	arr_1[1] = 1;

	for (int i = 2; i < 41; i++) {
		arr_0[i] = arr_0[i - 1] + arr_0[i - 2];
		arr_1[i] = arr_1[i - 1] + arr_1[i - 2];
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cout << arr_0[arr[i]] << " " << arr_1[arr[i]] << endl;
	}

	return 0;
}