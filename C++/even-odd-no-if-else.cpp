// #include<iostream>
// using namespace std;

// int main(){
//     int number = 20;

//     if(number % 2 == 0){
//         cout << "This is even number....";
//     }
//     else{
//         cout << "This is odd number....";
//     }
//     return 0;
// }



// This program demonstrates how to determine if a number is even or odd.

#include<iostream>
using namespace std;

int main(){
    int number ;

    cout << "Enter the any number :-";
    cin >> number;

    if(number % 2 == 0){
        cout << "This is Even number....";
    }
    else{
        cout << "This is Odd number......";
    }
}