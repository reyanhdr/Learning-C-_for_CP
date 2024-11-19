#include<bits/stdc++.h>
using namespace std;

int  *p;

void fun()
{

    int x = 10;
    p = &x;
    cout << "Fun ->" << *p << endl;
    return ;
}

int main()
{
    fun();

    int *a = new int ; // delete dynamic variable
    delete a;

cout << "Main -> " << *p << endl;


    return 0;
}

// Dynamic Memory declar