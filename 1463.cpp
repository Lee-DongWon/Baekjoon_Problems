#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int array[1000000];
	for (int i = n; i >= 0; i--) {
		array[i] = 987654321;
	}
	array[n] = 0;
	for (int index = n; index > 0; index--) {
		if (index % 3 == 0) {
			array[index / 3] = min(array[index / 3], array[index] + 1);
		}
		if (index % 2 == 0) {
			array[index / 2] = min(array[index / 2], array[index] + 1);
		}
		array[index - 1] = min(array[index - 1], array[index] + 1);
	}

	cout << array[1] << endl;

	return 0;
}