#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    int lastDigit1,lastDigit2;
    cin >> n1 >> n2;
    lastDigit1 = n1 % 10;
    lastDigit2 = n2 % 10;
    cout << lastDigit1 + lastDigit2;
    return 0;
    
}