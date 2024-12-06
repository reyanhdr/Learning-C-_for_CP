#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int m_marks;
    int e_marks;
    int t_marks; 

    
    void TotalMarks() {
        t_marks = m_marks + e_marks;
    }
};



bool cmp(Student l, Student r) {
    
    if (l.t_marks > r.t_marks) {
        return true;
    } else if (l.t_marks < r.t_marks) {
        return false;
    } else {
        
        return l.id < r.id;
    }
}

int main() {
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].m_marks >> a[i].e_marks;
        a[i].TotalMarks(); 
    }


    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " "
             << a[i].m_marks << " " << a[i].e_marks << endl;
    }

    return 0;
}
