#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;

    cout << "Enter the number :- ";
    cin >> n;

    do{
        fact = fact * i;
        i++;

    }while(i <= n);

    cout << "Factorial is " << n << " Number :- " << fact << endl;

    return 0;
}