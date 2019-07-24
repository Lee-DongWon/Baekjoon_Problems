#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;
		sum += b % a;
	}

	cout << sum << endl;

	return 0;
}