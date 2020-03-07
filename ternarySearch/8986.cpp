#include <iostream>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;

typedef long long ll;

ll computeDistance(vector<ll> point, ll interval) {
	ll result = 0;
	ll size = point.size();
	for (int i = 0; i < size; i++) {
		result += abs(interval * i - point[i]);
	}
	return result;
}

ll min(ll a, ll b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int N;
	cin >> N;
	vector<ll> point;
	point.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> point[i];
	}

	ll start = 0, end = 1e9;
	while (start + 2 < end) {
		ll left = (start * 2 + end) / 3;
		ll right = (start + end * 2) / 3;
		ll tempresult1 = computeDistance(point, left);
		ll tempReuslt2 = computeDistance(point, right);

		if (tempresult1 > tempReuslt2) {
			start = left;
		}
		else {
			end = right;
		}
	}

	ll result = LLONG_MAX;
	for (int i = start; i <= end; i++) {
		result = min(result, computeDistance(point, i));
	}
	cout << result << endl;
	return 0;
}
