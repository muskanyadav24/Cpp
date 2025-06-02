#include<iostream>
using namespace std;

int main(){

    // Six Number comparison.
    int a,b,c,d,e,f;                     

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
    cout << "Enter the F :- ";
    cin >> f;

    if(a > b){
        if(a > c){
            if(a > d){
                if(a > e){
                    if(a > f){
                        cout << "A is big....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
            else{
                if(d > e){
                    if(d > f){
                        cout << "D is big....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
        }
        else{
            if(c > d){
                if(c > e){
                    if(c > f){
                        cout << "C is big...";
                    }
                    else{
                        cout << "F is big....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
            else{
                if(d > e){
                    if(d > f){
                        cout << "D is big....";
                    }
                    else{
                        cout << "F is big....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
        }
    }else{
        if(b > c){
            if(b > d){
                if(b > e){
                    if(b > f){
                        cout << "B is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
            else{
                if(d > e){
                    if(d > f){
                        cout << "D is big....";
                    }
                    else{
                        cout << "F is big....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
        }
        else{
            if(c > d){
                if(c > e){
                    if(c > f){
                        cout << "C is big......";
                    }
                    else{
                        cout << "F is big......";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
            else{
                if(d > e){
                    if(d > f){
                        cout << "E is big....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
                else{
                    if(e > f){
                        cout << "E is big.....";
                    }
                    else{
                        cout << "F is big.....";
                    }
                }
            }
        }
    }     
}