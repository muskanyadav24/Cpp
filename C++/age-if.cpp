// #include<iostream>
// using namespace std;

// int main(){
//     int age = 20;

//     if(age > 18){
//     cout << "You are eligible...";
//     }
//     else{
//         cout << "You are not eligible...";
//     }

// }


// This program checks if a person is eligible based on their age

#include<iostream>
using namespace std ;

int main(){
    int age;

    cout << "Enter your age :-";
    cin >> age ;

    if(age > 18){
        cout << "You are eligible...";
    }
    else{
        cout << "You are not eligible...";
    }
}