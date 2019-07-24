#include <iostream>

using namespace std;

int main() {
	int n, sum = 0, index = 0;
	int arr[100000] = { 0 };
	int result[100000] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			index--;
			result[index] = 0;
		}
		else {
			result[index] = arr[i];
			index++;
		}
	}


	for (int i = 0; i < index; i++) {
		sum += result[i];
	}

	cout << sum << endl;

	return 0;
}