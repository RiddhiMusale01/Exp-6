# Experiment 6

AIM: To study and implement C++ decision making statements loops.

SOFTWARE: Visual Studio Code

THEORY: 
Loops are a fundamental part of programming which allow a block of code to iterate on basis of some given conditions. The types of loops are:

1] For loop: 
It is used when we know how many times we want a block of code to be executed. It consists of three parts- initialization, condition, increment/ decrement.

2] While loops:
While loop is used when we do not know how many times we want the block of code to executed. It continues to be executed as long as the given condition holds to be true. The condition is checked before the code is executed.

3] Do While loop:
It is similar to the while loop, but it checks the condition after the code is executed. Hence the code is executed at least once.

4]Nested Loops:
Nested loops are loops inside a loop. They are used in multidimensional arrays or creating patterns.

CODE:

For loop

```
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<20;i++){
        cout<<i<<endl;
    }
}
```
O/P:

![image](https://github.com/user-attachments/assets/2fea0145-0284-4deb-b107-7e258bfc630a)

While Loop

```
#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<10){
        cout<<i<<endl;
        i++;
    }
}
```
O/P:
![image](https://github.com/user-attachments/assets/8890522f-8fac-4fb3-b7df-4c91c3cdad41)

Do While Loop
```
#include<iostream>
using namespace std;
int main(){
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }
        while(i<10);
        return 0;     
}
```
O/P:

![image](https://github.com/user-attachments/assets/8dc343f5-dd44-4d10-9446-00cbc2cddc1b)

Nested For 
```
#include <iostream>
using namespace std;

int main() {
    for (int i=1; i<=10; i++) {
        for (int j=1;j<=10;j++) {
            cout <<i*j<<"\t"; 
        }
        cout << endl;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/fa6e001d-ff69-4242-83d0-f86a062a9783)

Nested While
```
#include <iostream>
using namespace std;

int main() {
    int i=1;
    while (i<=10) {
        int j=1;  
        while (j<=10) {
            cout<<i*j<<"\t"; 
            j++;
        }
        cout<<endl; 
        i++;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/f50beeab-2373-4e49-a68b-2b34d59c6801)

Nested Do While
```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j=1;
        do {
            cout<<i * j<< "\t"; 
            j++;
        } while (j<=10);
        cout<<endl; 
        i++;
    } while (i<=10);
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/9399b401-27fd-4be3-9602-69b9c854ad01)

For loop inside while loop:
```
#include <iostream>
using namespace std;
int main() {
    int i=1;
    while (i<=5) {
        for (int j=1; j<=5; j++) {
            cout << i*j <<"\t"; 
        }
        cout << endl; 
        i++;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/45c8d2fb-e41e-4176-b486-4724aa462e04)

While loop inside for loop:
```
#include <iostream>
using namespace std;

int main() {
    
    for (int i=1; i<=5; i++) {
        int j=1;

        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl; 
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/8c3c394b-edd9-4d16-aef0-78b03676474c)
```
#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
        cout<<"  ";
    }
    while(k!=(2*i-1)){
        cout<<"* ";
        k++;
    }
    k=0;
    cout<<endl;
}
cout<<endl;
    }
```
O/P:

![image](https://github.com/user-attachments/assets/c210445f-a95a-43fd-b675-39e442399968)

CONCLUSION:

In this experiment we used the different loops and their nested combinations, which are essential for programming and managing complex iterations. For loops are ideal for known iterations, whileloops for condition basis and do while for executing the code at least once.

Nested loops are used for more complex tasks, and understanding them is effective in handling those tasks.







