#include<iostream>
using namespace std;

bool almostPrime(int n){
    int count = 0;
    for(int i = 1; i <= n ; i++){
        if(n%i==0){
            count++;
            // cout << "count:"<< count<<" " << endl;
            // cout << "i:"<< i<<" "<<endl;
        }
    }
        if(count > 0 && count < 5){
            return true;
        }
        else{
            return false;
        }
    
}

int main(){
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 1; i <= n; i++){
        flag = almostPrime(i);
        if(flag){
            cout << i << " ";
        }
    }
   
}