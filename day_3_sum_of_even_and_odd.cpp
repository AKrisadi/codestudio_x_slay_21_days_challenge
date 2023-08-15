// In this program we are going to take a number input and then print the sum of all the even numbers in that number and the sum of all odd numbers in that provided number.
// e.g I/P - 23118 , O/P - 10 5 ( 10 is the sum of even numbers in the provided number ( 2 + 8 ) whereas 5 is the sum of odd numbers i.e sum of 3,1,1 in the provided number.
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int evenSum = 0, oddSum = 0;
	while (n) {
		int temp = n % 10;
		if (temp & 1) oddSum += temp;
		else evenSum += temp;
		n = n / 10;
	}
	
	cout << evenSum << " " << oddSum;
}
