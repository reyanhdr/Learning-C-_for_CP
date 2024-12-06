#include <bits/stdc++.h>
using namespace std;


int main() {
    string str ;
    getline(cin,str);
    regex pattern("EGYPT");
    string replacement = " ";

    string result = regex_replace(str, pattern, replacement);

    cout << result << endl;
    return 0;
}