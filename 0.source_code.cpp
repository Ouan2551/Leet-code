// this source code transform leet_code that have only class to normal program
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Function implementation goes here
        vector<string> result;
        return result;
    }
};

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution; // Create an object of the class
    string digits;
    
    cout << "Enter digits: ";
    cin >> digits;

    vector<string> combinations = solution.letterCombinations(digits); // Call the function

    cout << "Combinations: ";
    for (const string &combo : combinations) {
        cout << combo << " ";
    }
    cout << endl;

    return 0;
}