#include<iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    cin >> n;
    
    if(n == 0){
        cout << factorial ;
    }
    for(int i = 1 ; i <= n; i++){
        factorial = factorial * i;
    } 
    cout << factorial;
}