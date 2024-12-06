#include<bits/stdc++.h>
using namespace std;

int main()
{  
   string s;
   cin >> s;

   string word = "egypt";


   int count = 0;

   for (int i = 0 ; i < 20; i++){

        if (s[i] == 'E' || s[i] == 'e'){
            count++;
        }
        if(s[i] == 'G' || s[i] == 'g'){
            count++;
        }
        if (s[i] == 'Y' || s[i] == 'y'){
            count++;
        }
        if (s[i] == 'P' || s[i] == 'p'){
            count++;
        }
        if (s[i] == 'T' || s[i] == 't'){
            count++;
        }

   }
   cout << count << endl;

    return 0;
}
