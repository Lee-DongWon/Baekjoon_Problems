#include <iostream>
#include <queue>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	int t;
	queue<int> q;
	cin >> t;

	while (t--) {
		string order;
		int a, b;

		cin >> order;

		if (order == "push") {
			cin >> a;
			q.push(a);
		}
		else if (order == "front") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				b = q.front();
				cout << b << endl;
			}
		}
		else if (order == "back") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				b = q.back();
				cout << b << endl;
			}
		}
		else if (order == "size") {
			b = q.size();
			cout << b << endl;
		}
		else if (order == "empty") {
			if (q.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (order == "pop") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				b = q.front();
				q.pop();
				cout << b << endl;
			}
		}
	}
	return 0;
}