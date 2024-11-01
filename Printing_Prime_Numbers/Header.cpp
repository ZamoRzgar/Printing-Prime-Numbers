#include <iostream>
#include "Header.h"  // Include the header file

using namespace std;


bool isPrime(int num) {
	if (num < 2) {
		return false;
	}

	for (int i = 2;i < num;i++) {
		if (num % i == 0) {
			return false;
		}

	}
	return true;
}

void printPrimeNumber(int lowerNum, int upperNum) {
	cout << "Prime numbers between " << lowerNum << " and " << upperNum << " are: " << endl;

	for (int num = lowerNum;num <= upperNum;num++) {
		if (isPrime(num)) {
			cout << num << " ";
		}
	}
	cout << endl;
}







