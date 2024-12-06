#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    string word = "Jessica ";

    
    int found = s.find(word);

    if (found != -1) {
        cout << "YES"  << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}