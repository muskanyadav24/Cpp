#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Enter the A :- ";
    cin >> a;
    cout << "Enter the B :- ";
    cin >> b;
    cout << "Enter the C :- ";
    cin >> c;

    (a < b)?
        (a < c)?
        cout << "A is small..."
        :
        cout << "C is small..."
    :
    (b < c)?
    cout << "B is small..."
    :
    cout << "C is small...";
    return 0;
}