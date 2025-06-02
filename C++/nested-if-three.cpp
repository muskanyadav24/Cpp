#include<iostream>
using namespace std;

int main(){
    // Three number comparison.
    int a,b,c;

    cout << "Enter the A :-";
    cin >> a;
    cout << "Enter the B :-";
    cin >> b;
    cout << "Enter the C :-";
    cin >> c;

    if(a > b){
        // a;
        if(a > c){
            cout << "A is big...";
        }
        else{
            cout << "C is big...";
        }

    }else{
        // b;
        if(b > c){
            cout << "B is big....";
        }
        else{
            cout << "C is big....";
        }
    }

    return 0;
}