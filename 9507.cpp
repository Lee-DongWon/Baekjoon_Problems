#include <iostream>

using namespace std;

int main() {
	int n;
	long long arr[70] = { 0 };
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= 67; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;

		cout << arr[a] << endl;
	}

	return 0;
}