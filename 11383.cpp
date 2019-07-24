#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	string *arr = new string[n];
	string *compare = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> compare[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (compare[i].at(2 * j) != arr[i].at(j) || compare[i].at(2 * j + 1) != arr[i].at(j)) {
				cout << "Not Eyfa" << endl;
				return 0;
			}
		}
	}

	cout << "Eyfa" << endl;

	return 0;
}