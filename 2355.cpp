#include <iostream>    
using namespace std;
long long sigma(long long, long long);
long long sigma2(long long, long long);
long long sigma3(long long, long long);
int main()
{
	long long start, end;
	long long ans;
	cin >> start >> end;
	long long tmp;
	if (start > end) {
		tmp = start;
		start = end;
		end = tmp;
	}

	if (start >= 0) {
		ans = sigma(start, end);
	}
	else if (start < 0 && end >= 0) {
		ans = sigma2(start, end);
	}
	else if (end <= 0) {
		ans = sigma3(start, end);
	}

	cout << ans;

	return 0;
}

long long sigma(long long start, long long end) {
	long long res = 0;
	res = end * (end + 1) / 2;
	res -= start * (start - 1) / 2;
	return res;
}
long long sigma2(long long start, long long end) {
	long long res = 0;
	res = end * (end + 1) / 2;
	long long tmp = 0;
	tmp = start * (start - 1) / 2;
	res -= tmp;
	return res;
}
long long sigma3(long long start, long long end) {
	long long res = 0;
	long long tmp = 0;
	res = start * (start - 1) / 2;
	tmp = end * (end + 1) / 2;
	res -= tmp;
	res *= -1;
	return res;
}