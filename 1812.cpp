#include <iostream>

using namespace std;

int main() {
	int n;
	int arr[1000], sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sum /= 2;

	for (int i = 0; i < n; i++) {
		int tmp = 0;
		for (int j = 0; j < n; j += 2) {
			tmp += arr[(i + j) % n];
		}
		cout << tmp - sum << endl;
	}


	return 0;
}