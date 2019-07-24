#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, a, i, j, sum1, sum2, cnt;
	char arr[8];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cnt = 0;
		sum1 = 0, sum2 = 0;
		cin >> arr;
		sum1 = (arr[0] - 'A') * 26 * 26 + (arr[1] - 'A') * 26 + (arr[2] - 'A');
		sum2 += (arr[4] - 48) * 1000 + (arr[5] - 48) * 100 + (arr[6] - 48) * 10 + (arr[7] - 48);
		if (abs(sum1 - sum2) <= 100)
		{
			cout << "nice\n";
		}
		else
		{
			cout << "not nice\n";
		}
	}
	return 0;
}