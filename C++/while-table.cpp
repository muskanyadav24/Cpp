// WAP multiplication table of N.

#include<iostream> 
using namespace std;
int main(){
    int table,i=1;

    cout << "Enter the value :- ";
    cin >> table;

    while(i<=10){
        cout << table << " * " << i << " = " << table * i << endl;
        i++;
    }

    return 0;
}