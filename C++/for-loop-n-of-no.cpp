// Sum of n number.

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10, sum =0;

//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     cout << "Sum is " << n << " Number :- " << sum << endl;

//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n,sum=0;

    cout << "Enter the number :- ";
    cin >> n;

    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout << "Sum is " << n << " Number :- " << sum << endl ;

    return 0;
}
