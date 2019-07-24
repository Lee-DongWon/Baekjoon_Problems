#include <iostream>

using namespace std;

int main() {
	int t, sum = 0;
	int arr[101] = { 0 };
	int a[101] = { 0 };

	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> arr[i];
		a[i] = arr[i] * i - sum;
		sum += a[i];
	}

	for (int i = 1; i <= t; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}