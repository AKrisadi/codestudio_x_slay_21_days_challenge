#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
	vector<vector<int>>gs;
	for(int i=s;i<=e;i+=w)
	{
		int k=((i-32)*5)/9;
		gs.push_back({i,k});
	}
	return gs;
}
