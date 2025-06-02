// Sum of n number.

#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;

    cout << "Enter the number :- ";
    cin >> n;

    do{
        sum = sum + i;
        i++;
    }while(i <= n);

    cout << "Sum is " << n << " Number :- " << sum << endl ;

    return 0;
}