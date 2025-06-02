#include<iostream>
using namespace std;

int main(){

    // Five Number comparison.
    int a,b,c,d,e;

    cout << "Enter the A :- ";
    cin >> a;
    cout << "Enter the B :- ";
    cin >> b;
    cout << "Enter the C :- ";
    cin >> c;
    cout << "Enter the D :- ";
    cin >> d;
    cout << "Enter the E :- ";
    cin >> e;

    if(a > b){
        if(a > c){
            if(a > d){
                if(a > e){
                    cout << "A is big....";
                }
                else{
                    cout << "E is big....";
                }
            }
            else{
                if(d > e){
                    cout << "D is big...";
                }
                else{
                    cout << "E is big...";
                }
            }
        }
        else{
            if(c > d){
                if(c > e){
                    cout << "C is big....";
                }
                else{
                    cout << "E is big....";
                }
            }
            else{
                if(d > e){
                    cout << "D is big....";
                }
                else{
                    cout << "E is big....";
                }
            }
        }
    }else{
        if(b > c){
            if(b > e){
                cout << "B is big....";
            }
            else{
                cout << "E is big.....";
            }
        }
        else{
            if(c > d){
                if(c > e){
                    cout << "C is big....";
                }
                else{
                    cout << "E is big....";
                }
            }
            else{
                if(d > e){
                    cout << "D is big....";
                }
                else{
                    cout << "E is big....";
                }
            }
        }
    }
}