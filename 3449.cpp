#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;

	cin >> n;

	while (n--) {
		int dist = 0;
		string a, b;
		cin >> a >> b;

		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i]) {
				dist++;
			}
		}

		cout << "Hamming distance is " << dist << "." << endl;
	}

	return 0;
}