#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int *score = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	sort(score, score + n);

	cout << score[n - 1] - score[0] << endl;

	return 0;
}