#include <iostream>
#include <string>

using namespace std;

int gap;

int compare(int start, string a, string b) {
	int num = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a.at(i) != b.at(start + i)) {
			num++;
		}
	}

	return num;
}

int main() {
	string a, b;
	cin >> a >> b;
	int min = 10000;

	gap = b.length() - a.length();

	int *num_dif = new int[gap + 1];

	for (int i = 0; i <= gap; i++) {
		num_dif[i] = compare(i, a, b);
		if (min > num_dif[i]) {
			min = num_dif[i];
		}
	}

	printf("%d\n", min);

	return 0;
}