#include<iostream>
using namespace std;

int main(){
    // Seven Number comparison.
    int a,b,c,d,e,f,g;                     

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
    cout << "Enter the G :- ";
    cin >> g;

    if(a > b){
        if(a > c){
            if(a > d){
                if(a > e){
                    if(a > f){
                        if(a > g){
                            cout << "A is big.....";
                        }
                        else{
                            cout << "G is big......";
                        }
                    }
                    else{
                        if(f > g){
                            cout << "F is big....";
                        }
                        else{
                            cout << "G is big....";
                        }
                    }
                }
                else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }
                        else{
                            cout << "G is big....";
                        }
                    }
                }
            }
            else{
                if(d > e){
                    if(d > f){
                        if(d > g){
                            cout << "D is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }
                        else{
                            cout << "G is big....";
                        }
                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }
                        else{
                            cout << "G is big....";
                        }
                    }
                }
            }
        }
        else{
            if(c > d){
                if(c > e){
                    if(c > f){
                        if(c > g){
                            cout << "C is big....";
                        }else{
                            cout << "G is big.....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{

                    }
                }
            }else{
                if(d > e){
                    if(d > f){
                        if(d > g){
                            cout << "D is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }
                        else{
                            cout << "G is big....";
                        }
                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }
                        else{
                            cout << "G is big....";
                        }
                    }
                }
            }
        }
    }else{
        if(b > c){
            if(b > d){
                if(b > e){
                    if(b >f){
                        if(b > g){
                            cout << "B is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }
                }
            }else{
                if(d > e){
                    if(d > f){
                        if(d > g){
                            cout << "D is big......";
                        }else{
                            cout << "G is big.....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big.....";
                        }

                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big......";
                        }
                    }
                }
            }
        }else{
            if(c > d){
                if(c > e){
                    if(c > f){
                        if(c > g){
                            cout << "C is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }
                    
                }
            }else{
                if(d > e){
                    if(d > f){
                        if(d > g){
                            cout << "D is big...";
                        }else{
                            cout << "G is big...";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }
                }else{
                    if(e > f){
                        if(e > g){
                            cout << "E is big.....";
                        }else{
                            cout << "G is big.....";
                        }
                    }else{
                        if(f > g){
                            cout << "F is big....";
                        }else{
                            cout << "G is big....";
                        }
                    }
                }
            }
        }
    }
}