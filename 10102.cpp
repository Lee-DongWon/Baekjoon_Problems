#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, a = 0, b = 0;
	string vote;

	cin >> n;
	cin >> vote;

	for (int i = 0; i < vote.length(); i++) {
		if (vote.at(i) == 'A') {
			a++;
		}
		else {
			b++;
		}
	}


	if (a > b) {
		cout << "A" << endl;
	}
	else if (b > a) {
		cout << "B" << endl;
	}
	else {
		cout << "Tie" << endl;
	}

	return 0;
}