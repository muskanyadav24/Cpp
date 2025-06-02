#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cout << "Enter the A :- ";
    cin >> a;
    cout << "Enter the B :- ";
    cin >> b;
    cout << "Enter the C :- ";
    cin >> c;
    cout << "Enter the D :- ";
    cin >> d;

    (a < b)?
        (a < c)?
        (a < d)?
        cout << "A is small...."
        :
        cout << "D is small...."
        :
        (c < d)?
        cout << "C is small...."
        :
        cout << "D is small...."
    :
    (b < c)?
        (b < d)?
        cout << "B is small...."
        :
        cout << "D is small...."
    :
    (c < d)?
    cout << "C is small....."
    :
    cout << "D is small.....";
    
    return 0;
}