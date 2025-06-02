// Factorial number.

#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;

    cout << "Enter the number :- ";
    cin >> n;

    while(i <= n){
        fact = fact * i;
        i++;
    }

    cout << "Factorial is " << n << " Number :- " << fact << endl;
    

    return 0;
}