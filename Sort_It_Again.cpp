#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name ;
    int cls;
    char s;
    int id;
    int m_marks;
    int e_marks;
    
};


bool cmp (Student l, Student r)
{
    if (l.e_marks > r.e_marks){
        return true;
    }
    else if (l.e_marks < r.e_marks){
        return false;
    }
    else 
    {
        if (l.m_marks > r.m_marks)
        {
            return true;
        }
        else if (l.m_marks < r.m_marks){
            return false;
        }
        else {
            if (l.id < r.id){
                return true;
            }
            else {
                return false;
            }
        }

    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0 ; i < n; i++){

         cin >> a[i].name >> a[i].cls>>a[i].s>>a[i].id >> a[i].m_marks >> a[i].e_marks;
    }

   sort (a,a+n,cmp);
   for (int i =0 ; i < n; i++){

     cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].m_marks << " " << a[i].e_marks<<endl;
   }

   
   


    return 0;
}
