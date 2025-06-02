#include<iostream>
using namespace std;
int main(){
    int n,last_d,first_d;

    cout << "Enter the number :- ";
    cin >> n;

    last_d = n % 10;

    while(n>=10){
        n = n /10;
    }
    first_d = n;

    cout << "Sum of first-digit and last-digit number :- " << first_d + last_d << endl;

    return 0;
}