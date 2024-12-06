#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       long long int n;
       cin >> n;
       if (n==0){
        cout << "1"<<endl;
        continue;
       }
      long long int result = 1;

       for (int i = 1; i<= n;i++){
        
        result *=i;
        
       }
      cout << result << endl;
       

    }
    


    return 0;
}
