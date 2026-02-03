#include<iostream>
using namespace std;

void isPrime(int N){
    int count = 0;
    for(int i = 1; i <= N; i++){
         if( N%i == 0){
             count++;
         }
    }
    if(count == 2){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
}

int main(){
    int N;
    cin >> N;
    isPrime(N);
}