//Riddhi Musale
//PRN 23070123108
//Exp 6 While loop inside for loop
#include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 5; i++) {
        int j = 1;
        
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl; 
    }
    return 0;
}