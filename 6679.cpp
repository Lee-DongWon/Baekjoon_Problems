#include <iostream>

#define MAX     9999
#define MIN     1000
using namespace std;

int main(int argc, char const *argv[]) {
	int ret_ten, ret_twe, ret_hex;

	for (int i = MIN; i <= MAX; i++) {
		ret_ten = 0, ret_twe = 0, ret_hex = 0;

		for (int n = i; n > 0; n /= 10) {
			ret_ten += n % 10;
		}

		for (int n = i; n > 0; n /= 12) {
			ret_twe += n % 12;
		}

		for (int n = i; n > 0; n /= 16) {
			ret_hex += n % 16;
		}

		if (ret_ten == ret_twe && ret_twe == ret_hex) {
			cout << i << "\n";
		}
	}

	return 0;
}

