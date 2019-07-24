#include <iostream> 
#include <cstdlib> 
#include <cstdio> 
#include <ctime> 
using namespace std;

int main() {
	srand(time(NULL));
	cout << rand() % 10 + 1 << endl;
	return 0;
}