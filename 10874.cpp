#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0, order = 1;
	int re[100] = { 0 };

	cin >> n;

	while (n--) {
		int check = 0;
		int ans[10] = { 0 };
		for (int i = 0; i < 10; i++) {
			cin >> ans[i];
			if (ans[i] == i % 5 + 1) {
				check++;
			}
		}
		if (check == 10) {
			re[cnt] = order;
			cnt++;
		}
		order++;
	}

	for (int i = 0; i < cnt; i++) {
		cout << re[i] << endl;
	}

	return 0;
}