#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int N;
pair<int, int> arr[100000];


int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i].first >> arr[i].second;

	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		// endl �ð� �ʰ�
		cout << arr[i].first << ' ' << arr[i].second << '\n';
	}

	return 0;
}