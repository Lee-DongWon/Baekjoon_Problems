#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, score = 0;
	string name;

	cin >> n;
	cin >> name;

	for (int i = 0; i < n; i++) {
		score += name.at(i) - 64;
	}

	cout << score << endl;

	return 0;
}