#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin >> s;
   cout << s[0] << endl;
   cout << s.at(s.size()-1) << endl; 
   cout << s.back() << endl; // s[s.size()-1]
   cout << s.front() << endl; // s[0]


    return 0;
}
