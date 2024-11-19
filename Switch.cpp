#include<iostream>
using namespace std;

int main()
{
    int day ;
    cin >> day;

    switch(day)
    {
        case 1: 
             cout << "Saturday" << endl;
             break;

        case 2:
            cout << "sunday " << endl;
            break;

        case 3:
            cout << "Monday " << endl;
            break;
            
        case 4:
            cout << "Tuesday" << endl;
            break;

        case 5 :
            cout << "Wednesday \n";
            break;   
        case 6:
            cout << "Thursday \n";
        case 7:
            cout << "Friday \n";
         default :
             cout << "Wrong Input";         
            



    }
    

    return 0;
}

// when varriable values are fixed then we can use switch case