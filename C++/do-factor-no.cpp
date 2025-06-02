#include<iostream>
using namespace std;
int main(){
    int n,i=1;

    cout << "Enter the number :- ";
    cin >> n;

    do{
        if(n % i == 0){
            cout << i << ",";
        }
        i++;

    }while(i <= n/2);

    return 0;
}