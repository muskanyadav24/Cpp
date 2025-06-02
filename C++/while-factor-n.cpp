// Factors of a number.

#include<iostream>
using namespace std;
int main(){
    int n,i=1;

    cout <<"Enter the number :- ";
    cin >> n;

    while(i <= n/2){
        if(n % i == 0){
            cout << i << ",";
        }
        i++;
    }

    return 0;
}