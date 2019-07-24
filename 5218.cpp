#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		int *arr;
		arr = (int *)malloc(sizeof(int)*a.length());

		for (int j = 0; j < a.length(); j++) {
			arr[j] = b.at(j) - a.at(j);
			if (arr[j] < 0) {
				arr[j] += 26;
			}
		}

		cout << "Distances: ";
		for (int j = 0; j < a.length(); j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}

	return 0;
}