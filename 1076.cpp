#include <iostream>
#include <string>

using namespace std;

int main() {
	long long result = 0;

	string resis1, resis2, resis3;

	getline(cin, resis1);

	if (resis1 == "black") {
		result += 0;
	}
	else if (resis1 == "brown") {
		result += 10;
	}
	else if (resis1 == "red") {
		result += 20;
	}
	else if (resis1 == "orange") {
		result += 30;
	}
	else if (resis1 == "yellow") {
		result += 40;
	}
	else if (resis1 == "green") {
		result += 50;
	}
	else if (resis1 == "blue") {
		result += 60;
	}
	else if (resis1 == "violet") {
		result += 70;
	}
	else if (resis1 == "grey") {
		result += 80;
	}
	else {
		result += 90;
	}



	getline(cin, resis2);

	if (resis2 == "black") {
		result += 0;
	}
	else if (resis2 == "brown") {
		result += 1;
	}
	else if (resis2 == "red") {
		result += 2;
	}
	else if (resis2 == "orange") {
		result += 3;
	}
	else if (resis2 == "yellow") {
		result += 4;
	}
	else if (resis2 == "green") {
		result += 5;
	}
	else if (resis2 == "blue") {
		result += 6;
	}
	else if (resis2 == "violet") {
		result += 7;
	}
	else if (resis2 == "grey") {
		result += 8;
	}
	else {
		result += 9;
	}

	getline(cin, resis3);

	if (resis3 == "black") {
		result *= 1;
	}
	else if (resis3 == "brown") {
		result *= 10;
	}
	else if (resis3 == "red") {
		result *= 100;
	}
	else if (resis3 == "orange") {
		result *= 1000;
	}
	else if (resis3 == "yellow") {
		result *= 10000;
	}
	else if (resis3 == "green") {
		result *= 100000;
	}
	else if (resis3 == "blue") {
		result *= 1000000;
	}
	else if (resis3 == "violet") {
		result *= 10000000;
	}
	else if (resis3 == "grey") {
		result *= 100000000;
	}
	else {
		result *= 1000000000;
	}

	cout << result << endl;

	return 0;
}