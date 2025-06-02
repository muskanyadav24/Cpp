#include<iostream>
using namespace std;
int main(){
    
    int no = 1 ;
    int i = 1 ;

// Odd  number....

    cout << "Odd Number..." << endl;

    while(no <= 100){
        if(no % 2 != 0){
            cout << no << ",";
        }
        no++;
    }
    cout << endl << endl;


// Even number....

    cout << "Even Number..." << endl;

    while(i <= 100){
        if(i % 2 == 0){
            cout << i << "," ;
        }
        i++;
    }

    cout << endl << endl;
    
    return 0;
}