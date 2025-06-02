#include<iostream>
using namespace std;

int main(){

    // Four Number comparison.
    int a,b,c,d;

    cout << "Enter the A :- ";
    cin >> a;
    cout << "Enter the B :- ";
    cin >> b;
    cout << "Enter the C :- ";
    cin >> c;
    cout << "Enter the D :- ";
    cin >> d;

    if(a > b){
        if(a > c){
            if(a > d){
                cout << "A is big...";
            }
            else{
                cout << "D is big...";
            }
        }
        else{
            if(c > d){
                cout << "C is big...";
            }
            else{
                cout << "D is big...";
            }
        }
    }else{
        if(b > c){
            if(b > d){
                cout << "B is big...";
            }
            else{
                cout << "D is big...";
            }
        }
        else{
            if(c > d){
                cout << "C is big...";
            }
            else{
                cout << "D is big...";
            }
        }
    }

    return 0;
}