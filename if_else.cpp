#include<iostream>
using namespace std;

int main()
{
   int x = 7;
   if (x % 2== 0){

       cout << "Even" << endl;
   }
   
   else {
       cout << "odd" << endl;
   }

   // sortcut for if else 
   // if statement have 1 not more then I can use shortcut 

   x%2 == 0 ? cout << "Even "<< endl : cout << "odd " << endl;
    return 0;
}