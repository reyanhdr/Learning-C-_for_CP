#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s = "Hello World";

   s.resize(20 ,'x');

   if (s.empty() == true)
   {
    cout << " Empty" << endl;
   }

   else 
   {
    cout << " Not Empty" << endl;
   }
   cout << s << endl;


    return 0;
}
