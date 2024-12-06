#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++){
         cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
    }

   string s;
    for (int i = 0; i < n; i++) {
        s.push_back(a[i].s); 
    }

    
    reverse(s.begin(), s.end());

    
    for (int i = 0; i < n; i++) {
        a[i].s = s[i];  
    }


    for (int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}
