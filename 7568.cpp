#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	int *weight = new int[n];
	int *height = new int[n];
	int *result = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> weight[i];
		cin >> height[i];
		result[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (weight[i] > weight[j] && height[i] > height[j]) {
				result[j]++;
			}
			else if (weight[i] < weight[j] && height[i] < height[j]) {
				result[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] + 1 << " ";
	}
	cout << endl;

	return 0;
}