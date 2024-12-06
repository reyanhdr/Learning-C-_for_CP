#include<bits/stdc++.h>
using namespace std;

int main()
{
    
int n; 
cin >> n;

if ( n<=1){
    cout << "NO";
    return 0;
}

int flag =1;

for (int i = 2; i<n; i++){

    if ( n%i == 0){
         flag = 0;
        break;
    }
   
} 

if ( flag == 0){
    cout << "NO";
}
else 
cout << "YES";

    return 0;
}
