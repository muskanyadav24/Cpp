#include<iostream>
using namespace std;
int main(){
    int no = 1;

    // do{
    //     if(no % 2 != 0){
    //         cout << no << ",";
    //     }
    //     no++;

    // }while(no <= 100);


    do{
        if(no % 2 == 0){
            cout << no << ",";
        }
        no++;

    }while(no <= 100);





    return 0;
}