#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i,tamp;

    cout << "Enter the number :- ";
    cin >> n;
    tamp=n;
    while(tamp>9){// 123>9,12>9,1>9

        // sum+=tamp%10;
        // tamp=tamp/10;
        
        tamp = tamp % 10;//123%10=3,12%10=2
        sum = sum + tamp;//0+3=3,3+2=5
       //tamp = tamp / 10;//123/10=12, 12/10=1
    }
    sum = sum + tamp;//5=5+1=6
    // sum+=tamp;
    cout << "Sum is :-  " << sum << endl  ;


    return 0;
}