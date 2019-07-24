#include <iostream>

using namespace std;

int main() {
	int n, a, b;

	cin >> n >> a >> b;

	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i][b - 1] > arr[a - 1][b - 1]) {
			cout << "ANGRY" << endl;
			return 0;
		}
		if (arr[a - 1][i] > arr[a - 1][b - 1]) {
			cout << "ANGRY" << endl;
			return 0;
		}
	}

	cout << "HAPPY" << endl;
	return 0;
}