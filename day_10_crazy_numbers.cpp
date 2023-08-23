#include <bits/stdc++.h> 
vector < vector < int > > numberPattern(int n) {

  // Write your code here
   int num = 1;

  vector<vector<int>>ans;

  for(int i=n-1;i>=0;i--){

    vector<int> temp;

    for(int j=0;j<n;j++){

      if(j<i) temp.push_back(-1);

      else temp.push_back(num++);

      if(num==10) num= 1;

    }

    ans.push_back(temp);

  }

  return ans;

}
