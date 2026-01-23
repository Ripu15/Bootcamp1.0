
#include<iostream>
using namespace std;

int main(){
    int Num, Multiple;
    cin >> Num >> Multiple;
    if(Multiple % Num == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}