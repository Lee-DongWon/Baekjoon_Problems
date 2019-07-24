#include <iostream>

using namespace std;

int main() {
	int n;
	int arr[100] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int b, cnt = 0;

	cin >> b;

	for (int i = 0; i < n; i++) {
		if (arr[i] == b) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}