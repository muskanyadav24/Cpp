#include<iostream>
using namespace std;
int main(){
    int table, i=1;

    cout << "Enter the number :- ";
    cin >> table;

    do{
        cout << table << " * " << i << " = " << table * i << endl;
        i++;
    }while(i<=10);


    return 0;
}