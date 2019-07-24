#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[100] = { 0 };
		int a, sum = 0;

		cin >> a;

		for (int j = 0; j < a; j++) {
			cin >> arr[i];
			sum += arr[i];
		}

		cout << sum << endl;
	}

	return 0;
}