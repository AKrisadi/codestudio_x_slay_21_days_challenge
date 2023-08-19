string lookAndSaySequence(int n) 
{
    // Write your code here.
    string result = "1";
    for (int i = 1; i < n; i++) {
        string next_result;
        for (int j = 0; j < result.length(); j++) {
            int count = 1;
            while (j + 1 < result.length() && result[j] == result[j + 1]) {
                j++;
                count++;
            }
            next_result += to_string(count) + result[j];
        }
        result = next_result;
    }
    return result;
}
