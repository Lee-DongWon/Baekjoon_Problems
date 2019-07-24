#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int sum = 0, Max = 0;

	for (int i = 0; i < 4; i++) {
		int come, out;

		cin >> out >> come;

		sum = sum + come - out;

		Max = max(Max, sum);
	}

	cout << Max << endl;

	return 0;
}