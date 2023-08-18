bool checkArmstrong(int n){
	//Write your code here
	int ans = 0;
	int m = n;
	int size = 0;
	while (m!=0){
		size ++;
		m = m / 10;
	}
	m = n;
	while (m!=0){
		int r = m % 10;
		ans += pow(r,size);
		m = m / 10;
	}
	return n == ans;
}
