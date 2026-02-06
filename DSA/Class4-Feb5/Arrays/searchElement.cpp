#include<iostream>
using namespace std;

int main(){
    bool flag = false;
    long long n;
    cin >> n;
    long long arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long  x;
    cin >> x;
     for(int i = 0; i < n; i++){
        //cout << "arr[i]" << arr[i] << " ";
        if(arr[i] ==  x){
            //cout << "Inside if() arr[i]" << arr[i] ;
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
}