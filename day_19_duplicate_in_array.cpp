int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int ans1=0 ;
    for (int i=1;i<arr.size();i++){
        ans1 = ans1 ^ i;
    }
    int ans2=0;
    for (int i=0;i<arr.size();i++){
        ans2 = ans2 ^ arr[i];
    }

    return ans1^ans2;
}
