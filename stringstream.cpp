#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
//    cin.ignore();
   getline(cin,s);

   cout << s << endl;
   stringstream ss(s);

   string word;

   int cnt = 0 ;

   while (ss >> word){
    cout << word << endl;
    cnt++;
   }

   cout << cnt << endl;
//    ss >> word;
//    cout << word << endl;
//    ss >> word;
//    cout << word << endl;
//     ss >> word;
//    cout << word << endl;
//     ss >> word;
//    cout << word << endl;


    return 0;
}
