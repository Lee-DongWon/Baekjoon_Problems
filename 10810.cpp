#include <iostream>

using namespace std;

int main() {
	int n, m;
	int arr[100] = { 0 };

	cin >> n >> m;

	while (m--) {
		int a, b, c;

		cin >> a >> b >> c;

		for (int i = a - 1; i < b; i++) {
			arr[i] = c;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;

}