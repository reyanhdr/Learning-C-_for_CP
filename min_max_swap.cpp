#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a, b, c;
   cin >> a >> b >> c;
    //  if (a>b){
    //     cout << a << endl;
    //  }
    //  else 
    //    cout << b << endl;

    cout << min ({a,b,c}) << endl;
    cout << max ({a,b,c}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    swap (a,b);

    cout << a << " " << b << endl;

    return 0;
}