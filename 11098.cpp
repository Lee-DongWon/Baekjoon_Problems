#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n, temp;
		int arr[100] = { 0 };
		string str;
		string name[100];

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i] >> name[i];
		}

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;

					str = name[i];
					name[i] = name[j];
					name[j] = str;
				}
			}
		}

		cout << name[n - 1] << endl;

	}

	return 0;
}