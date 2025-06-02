#include<iostream>
using namespace std;
int main(){
    int table,i=1;

    cout << "Enter the number :- ";
    cin >> table;

    for(int i=1; i<=10; i++){
        cout << table << " * " << i << " = " << table * i << endl;
    }

    return 0;
}