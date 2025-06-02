#include<iostream>
using namespace std;

int main(){
    int pr;

    cout << "Enter the any number :-";
    cin >> pr;

    if(pr >= 90 && pr < 100){
        cout << "Grade:- A+";
    }
    else if(pr >= 80 && pr < 90){
        cout << "Grade:- A";
    }
    else if(pr >= 70 && pr < 80){  
        cout << "Grade:- B+";
    }
    else if(pr >= 60 && pr < 70){
        cout << "Grade:- B";
    }
    else if(pr >= 50 && pr < 60){
        cout << "Grade:- C";
    }
    else{
        if(pr < 50){
            cout << "Sorry, you are fail.";
        }
        else{
            cout << "Invalid input. Please enter a valid number.";
        }
    }
}