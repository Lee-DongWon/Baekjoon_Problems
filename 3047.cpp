#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c, A, B, C;
	string order;

	cin >> a >> b >> c;
	cin >> order;

	if (a > b) {
		if (b > c) {	//abc
			A = c;
			B = b;
			C = a;
		}
		else {
			if (c > a) {		//cab
				A = b;
				B = a;
				C = c;
			}
			else {				//acb
				A = b;
				B = c;
				C = a;
			}
		}
	}
	else {
		if (a > c) {		//bac
			A = c;
			B = a;
			C = b;
		}
		else {				//bca
			if (b > c) {
				A = a;
				B = c;
				C = b;
			}
			else {			//cba
				A = a;
				B = b;
				C = c;
			}
		}
	}

	if (order[0] == 'A') {
		printf("%d ", A);
		if (order[1] == 'B') {
			printf("%d %d\n", B, C);
		}
		else {
			printf("%d %d\n", C, B);
		}
	}
	else if (order[0] == 'B') {
		printf("%d ", B);
		if (order[1] == 'A') {
			printf("%d %d\n", A, C);
		}
		else {
			printf("%d %d\n", C, A);
		}
	}
	else {
		printf("%d ", C);
		if (order[1] == 'A') {
			printf("%d %d\n", A, B);
		}
		else {
			printf("%d %d\n", B, A);
		}
	}
}