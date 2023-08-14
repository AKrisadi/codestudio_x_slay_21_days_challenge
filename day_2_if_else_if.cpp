string compareIfElse(int a, int b) {
	// Write your code here
	string s = "smaller";
	string g = "greater";
	string e = "equal";

	if (a > b) return g;
	else if (b > a) return s;
	else return e;
}
