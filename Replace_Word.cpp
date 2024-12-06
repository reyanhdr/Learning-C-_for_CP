#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);  
    
    string word = "Jessica";
    
    stringstream ss(s);
    string temp;
    
    while (ss >> temp) {
        if (temp == word) {  
            cout << "YES" << endl;
            return 0;  
        }
    }
    
    
    cout << "NO" << endl;
    
    return 0;
}
