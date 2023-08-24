#include <bits/stdc++.h> 

void printPattern(int n) {
	// Write your code here.
	for(int i = 1; i <= n; i++)
	{
		for(int l = 1; l <= (n - i); l++)
		{
			cout << " ";
		}
		for(int j = 1; j <= (2 * i - 1); j++)
		{
			cout << "*";
		}
		for(int k = 1; k <= (n - i); k++)
		{
			cout << " ";
		}
		cout << endl;
	}
}
