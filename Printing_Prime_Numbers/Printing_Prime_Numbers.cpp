#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "Header.h"


using namespace std;



int main() {
	int lowerNum, upperNum;

	cout << "Enter Lower number: ";
	cin >> lowerNum;

	cout << "Enter Upper number: ";
	cin >> upperNum;

	printPrimeNumber(lowerNum, upperNum);



	return 0;


}