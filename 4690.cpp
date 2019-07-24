#include <iostream>

using namespace std;

int f(int a) {
	return a * a * a;
}

int main() {
	for (int i = 2; i <= 100; ++i) {
		for (int j = 2; j < i; ++j) {
			for (int k = j + 1; k < i; ++k) {
				for (int l = k + 1; l < i; ++l) {
					if (f(i) == f(j) + f(k) + f(l)) {
						printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, l);
					}
				}
			}
		}
	}

	return 0;
}