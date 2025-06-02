// Sum of n number.

#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;

    cout << "Enter the number :- ";
    cin >> n;

    while(i <= n){
        sum = sum + i;
        i++;
    }

    cout << "Sum is " << n << " Number :- " << sum << endl ;
    
    return 0;
}