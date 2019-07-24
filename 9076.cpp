#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int temp;
		int arr[5] = { 0 };

		for (int j = 0; j < 5; j++) {
			cin >> arr[j];
		}

		for (int j = 0; j < 5; j++) {
			for (int k = j; k < 5; k++) {
				if (arr[j] > arr[k]) {
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
			}
		}

		if ((arr[3] - arr[1]) >= 4) {
			cout << "KIN" << endl;
		}
		else {
			cout << arr[1] + arr[2] + arr[3] << endl;
		}
	}
	return 0;
}