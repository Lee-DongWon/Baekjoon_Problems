#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	if (a%b == 0) {
		return b;
	}
	else {
		return gcd(b, a%b);
	}
}

int main() {
	int n;
	int arr[100] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		cout << arr[0] / gcd(arr[0], arr[i]) << "/" << arr[i] / gcd(arr[0], arr[i]) << endl;
	}

	return 0;
}