#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:

    int roll;
    int cls;
    double gpa;

    Student(int r, int c , double g)
    {
       roll = r;
       cls = c;
       gpa = g;
    }
};

int main()
{   
    
    Student Rahim (45,5,3.2);
    Student Karim(2,7,5.00);
//    Student Rahim;
//    Rahim.roll = 45;
//    Rahim.cls = 5;
//    Rahim.gpa = 3.20;

//    Student Karim;
//    Karim.roll = 2;
//    Karim.cls = 5;
//    Karim .gpa = 5.00;

   cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
   cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;


    return 0;
}
