#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;

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
    cout << "Enter the F :- ";
    cin >> f;

    (a < b)?
        (a < c)?
        (a < d)?
        (a < e)?
        (a < f)?
        cout << "A is small..."
        :
        cout << "F is small..."
        :
        (e < f)?
        cout << "E is small..."
        :
        cout << "F is small..."
        :
        (d < e)?
            (d < f)?
            cout << "D is small..."
            :
            cout << "F is small..."
        :
        (e < f)?
        cout << "E is small..."
        :
        cout << "F is small..."
        :
        (c < d)?
            (c < e)?
            (c < f)?
            cout << "C is small..."
            :
            cout << "F is small..."
            :
            (e < f)?
            cout << "E is small..."
            :
            cout << "F is small..."
        :
        (d < e)?
            (d < f)?
            cout << "D is small..."
            :
            cout << "F is small..."
        :
        (e < f)?
        cout << "E is small...."
        :
        cout << "F is small...."
    :
    (b < c)?
        (b < d)?
        (b < e)?
        cout << "B is small..."
        :
        cout << "E is small..."
        :
        (d < e)?
        cout << "D is small..."
        :
        cout << "E is small..."
    :
    (c < d)?
        (c < e)?
        (c < f)?
        cout << "C is small..."
        :
        cout << "F is small..."
        :
        (e < f)?
        cout << "E is small..."
        :
        cout << "F is small...."
    :
    (d < e)?
        (d < f)?
        cout << "D is small..."
        :
        cout << "F is small..."
    :
    (e < f)?
    cout << "E is small..."
    :
    cout << "F is small...";

    return 0;
}