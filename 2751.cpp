#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, s, *N;
	cin >> s;
	N = new int[s];

	for (i = 0; i < s; i++) {
		cin >> N[i];
	}
	sort(N, N + s);

	for (i = 0; i < s; i++) {
		cout << N[i] << "\n";
	}
}