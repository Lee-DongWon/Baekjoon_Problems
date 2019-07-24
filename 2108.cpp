#include <iostream>
#include <algorithm>

using namespace std;

int arr[500000];
int cnt[8001] = { 0 };

int main() {
	int n, result1, result2, result3, result4, Max = 0, sum = 0, check = 0, maxnum = 0;
	double avg;


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		cnt[arr[i] + 4000]++;
	}

	avg = (double)sum / n;
	if (avg >= 0) {
		result1 = (int)(avg + 0.5);
	}
	else {
		result1 = (int)(avg - 0.5);
	}

	sort(arr, arr + n);
	result2 = arr[n / 2];


	for (int i = 0; i <= 8000; i++) {
		Max = max(Max, cnt[i]);
	}
	for (int i = 0; i <= 8000; i++) {
		if (cnt[i] == Max) {
			maxnum++;
		}
	}

	if (maxnum == 1) {
		for (int i = 0; i <= 8000; i++) {
			if (cnt[i] == Max) {
				result3 = i - 4000;
			}
		}
	}
	else {
		for (int i = 0; i <= 8000; i++) {
			if (cnt[i] == Max && check == 1) {
				result3 = i - 4000;
				break;
			}
			else if (cnt[i] == Max) {
				check++;
			}
		}
	}


	result4 = arr[n - 1] - arr[0];

	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;

	return 0;
}