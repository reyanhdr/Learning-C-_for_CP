#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
     cin >> t;
    
    while (t--) {
        int maxMarks = -1;
        int selectedID = -1;
        string selectedName, selectedSection;
        int selectedMarks = -1;
        
        for (int i = 0; i < 3; ++i) {
            int ID;
            string name, section;
            int totalMarks;
            
            cin >> ID >> name >> section >> totalMarks;
            
            if (totalMarks > maxMarks || (totalMarks == maxMarks && ID < selectedID)) {
                maxMarks = totalMarks;
                selectedID = ID;
                selectedName = name;
                selectedSection = section;
                selectedMarks = totalMarks;
            }
        }
        
        cout << selectedID << " " << selectedName << " " << selectedSection << " " << selectedMarks << endl;
    }
    
    return 0;
}