#include<iostream>
#include<math.h>

using namespace std;

bool prime(int64_t num)
{
	if (num % 2 == 0)
		return false;
	for (int i = 3; i < 1000000; i += 2)
	{
		if (num %i == 0)
			return false;
	}
	return true;
}


int main() {
	int64_t N, num[10];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (prime(num[i]))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}