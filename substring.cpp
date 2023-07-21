#include <iostream>
#include <vector>
using namespace std;

vector<string> getSub(string str, int i) {
    if (i == str.size()) {
        vector<string> s;
        s.push_back("");
        return s;
    } else {
        char ch = str[i];
        vector<string> temp = getSub(str, i + 1);
        vector<string> substr;
        for (string s : temp) {
            substr.push_back(s + "");
            substr.push_back(ch + s);
        }
        return substr;
    }
}

int main() {
    vector<string> ans;
    string str;
    cout << "Enter a string to get all possible substrings:\n";
    cin >> str;
    ans = getSub(str, 0);
    for (string st : ans) {
        cout << " " << st << "\n";
    }

    return 0;
}
