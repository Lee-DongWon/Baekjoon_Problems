#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		cout << string(s.rbegin(), s.rend()) << ' ';
	}
}