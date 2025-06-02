// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
//     int num2 = 20;

//     int add = num1 + num2 ;

//     cout << "Ans :=" << num1 + num2 ;

//     return 0;
// }


// This program adds two numbers input by the user and displays the result.

#include<iostream>
using namespace std;
int main(){
    int num1 ;
    int num2 ;

    cout << "Enter the num1 :- ";
    cin >> num1;

    cout << "Enter the num2 :- ";
    cin >> num2;

    int ans = num1 + num2;
    cout <<"Ans :-" << num1 + num2;

    return 0;
}