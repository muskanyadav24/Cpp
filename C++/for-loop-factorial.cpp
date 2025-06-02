//Factorial number. 

#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;

    cout << "Enter the number :- ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << "Factorial is " << n << " Number :- " << fact << endl;

    return 0;
}
