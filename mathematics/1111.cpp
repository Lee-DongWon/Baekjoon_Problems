#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a = 0, b = 0;
	int N;
	cin >> N;
	vector<int> arr;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	if (N == 1) {
		cout << "A" << endl;
	}
	else if (N == 2) {
		if (arr[0] == arr[1]) {
			cout << arr[0] << endl;
		}
		else {
			cout << "A" << endl;
		}
	}
	else {
		bool check = true;
		for (int i = 0; i < N-1; i++) {
			if (i == 0) {
				int temp0 = arr[0], temp1 = arr[1], temp2 = arr[2];
				if (temp0 == temp1) {
					a = 1;
					b = 0;
				}
				else {
					a = (temp2 - temp1) / (temp1 - temp0);
					b = temp1 - temp0 * a;
				}
			}

			int data = arr[i] * a + b;
			int checkData = arr[i + 1];

			if (data != checkData) {
				check = false;
			}
		}

		if (check) {
			cout << a * arr[N - 1] + b << endl;
		}
		else {
			cout << "B" << endl;
		}
	}
	return 0;
}
