int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j = 0;
	for (int i=1;i<n;i++){
		if (arr[i] != arr[j]){
			j++;
			swap(arr[i],arr[j]);
		}
	}
	return j+1;
}
