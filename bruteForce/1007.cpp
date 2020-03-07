#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

double ans;
int n, t;
int ax[21];
int ay[21];
bool c[21];

void go(int cnt, int index) {
	if (cnt == n / 2) {
		double x = 0, y = 0;
		for (int i = 0; i < n; i++) {
			if (c[i]) {
				x -= ax[i];
				y -= ay[i];
			}
			else {
				x += ax[i];
				y += ay[i];
			}
		}
		ans = min(ans, sqrt(x*x + y * y));
		return;
	}
	if (index == n) return;

	go(cnt, index + 1);
	c[index] = true;
	go(cnt + 1, index + 1);
	c[index] = false;
}
int main() {
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		cin >> n;
		ans = 9876543210;
		for (int i = 0; i < n; i++)
			cin >> ax[i] >> ay[i];
		go(0, 0);
		printf("%.6lf\n", ans);
	}
}
