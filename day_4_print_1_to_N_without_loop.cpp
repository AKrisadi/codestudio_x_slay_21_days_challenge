void print(vector<int> &ans,int x){
    if (x == 0) return ;
    
    print(ans,x-1);

    ans.push_back(x);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    print(ans,x);
    return ans;
}
