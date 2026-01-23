#include<iostream>
using namespace std;

int main(){
    int Num, Factor;
    cin >> Num >> Factor;
    if(Num % Factor == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}