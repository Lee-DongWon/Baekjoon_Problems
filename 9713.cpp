#include <iostream>

using namespace std;

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		printf("%d\n", ((k + 1) / 2)*((k + 1) / 2));
	}

	return 0;
}