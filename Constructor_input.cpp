#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:

    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls , double gpa)
    {
       this->roll = roll;
       this->cls = cls;
       this->gpa = gpa;
    }
};

int main()
{   
    int r;
    int c;
    double g;
    cin >> r >> c >> g;

    Student Rahim(r,c,g);
    // Student Karim(r,c,g);


   cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
//    cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;


    return 0;
}
