#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int m, max = 0;
		cin >> m;
		int *score = new int[m];

		for (int j = 0; j < m; j++) {
			cin >> score[j];
		}

		sort(score, score + m);

		for (int j = 0; j < m - 1; j++) {
			if (max < score[j + 1] - score[j]) {
				max = score[j + 1] - score[j];
			}
		}

		printf("Class %d\n", i + 1);
		printf("Max %d, Min %d, Largest gap %d\n", score[m - 1], score[0], max);
	}

	return 0;
}