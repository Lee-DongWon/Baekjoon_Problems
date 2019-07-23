#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct Info {
	int index;
	int ans;
	int value;
}Info;

bool compareValue(Info &a, Info &b) {
	if (a.value != b.value) {
		return a.value < b.value;
	}
	return a.index < b.index;
}

bool compareIndex(Info &a, Info &b) {
	return a.index < b.index;
}

int main() {
	int n;

	cin >> n;

	Info *arr = new Info[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i].value;
		arr[i].index = i;
	}

	sort(arr, arr + n, compareValue);

	for (int i = 0; i < n; i++) {
		arr[i].ans = i;
	}

	sort(arr, arr + n, compareIndex);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i].ans);
	}

	return 0;
}