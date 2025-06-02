#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;

    cout << "Enter the A :- ";
    cin >> a;
    cout << "Enter the B :- ";
    cin >> b;
    cout << "Enter the C :- ";
    cin >> c;
    cout << "Enter the D :- ";
    cin >> d;
    cout << "Enter the E :- ";
    cin >> e;

    (a < b)?
        (a < c)?
        (a < d)?
        (a < e)?
        cout << "A is small...."
        :
        cout << "E is small...."
        :
        (d < e)?
        cout << "D is small...."
        :
        cout << "E is small...."
        :
        (c < d)?
            (c < e)?
            cout << "C is small...."
            :
            cout << "E is small...."
        :
        (d < e)?
        cout << "D is small...."
        :
        cout << "E is small...."
    :
    (b < c)?
        (b < d)?
        (b < e)?
        cout << "B is small...."
        :
        cout << "E is small...."
        :
        (d < e)?
        cout << "D is small...."
        :
        cout << "E is small...."
    :
    (c < d)?
        (c < e)?
        cout << "C is small...."
        :
        cout << "E is small...."
    :
    (d < e)?
    cout << "D is small....."
    :
    cout << "E is small.....";

    return 0;
}