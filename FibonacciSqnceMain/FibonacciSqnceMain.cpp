#include <iostream>

using namespace std;

int main() {

	int numOne, numTwo, sum;

	sum = 0;
	numOne = 0;
	numTwo = 1;

	while (sum <= 1000) {
		sum = numOne + numTwo;
		numOne = numTwo;
		cout << sum;
	}

}