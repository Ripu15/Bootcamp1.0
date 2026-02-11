#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = false;
    //logic
    for(int i = 1 ; i <= n ; i++){
        if(n%i == 0){
            if(i%10==2 || i%10==7){
                cout << i << " ";
                flag = true;
            }
        }
    }
    if(flag==false){
    cout << -1;
    }
}