#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[10] = { 0 };
		int temp;
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}

		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				if (arr[j] < arr[k]) {
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
			}
		}

		cout << arr[2] << endl;
	}

	return 0;
}