//Riddhi Musale
//PRN 23070123108
//Exp 6 Nested While Loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        int j = 1;
        
        while (j <= 10) {
            cout << i * j << "\t"; 
            j++;
        }
        cout << endl; 
        i++;
    }
    return 0;
}