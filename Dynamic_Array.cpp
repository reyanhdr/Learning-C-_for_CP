#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int a[5];  static array
    
    int *a =  new int [5]; // Dynamic Array
    
    for (int i = 0 ; i < 5; i++){
        cin >> a[i];
        cout << a[i] << " ";
    }


    return 0;
}
