#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	bool check = false;
	int result = 0;
	int arr[10] = { 0 };

	for (int i = 1; i <= 9; i++) {
		cin >> arr[i];
		result += arr[i];
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = i + 1; j <= 9; j++) {
			if ((result - arr[i] - arr[j]) == 100) {
				arr[i] = 10000;
				arr[j] = 10000;
				check = true;
				break;
			}
		}
		if (check) {
			break;
		}
	}

	sort(arr, arr + 10);

	for (int i = 1; i <= 7; i++) {
		if (arr[i] != 10000)
			cout << arr[i] << endl;
	}


	return 0;
}