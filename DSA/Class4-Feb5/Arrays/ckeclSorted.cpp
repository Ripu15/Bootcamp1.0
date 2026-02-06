#include<iostream>
using namespace std;

int main(){
    long long n;
    bool sorted = false;
    cin >> n ;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    //filling the array
    for(long long i = 0; i < n; i++){
         if(arr[i] >= arr[i-1]){
             //cout << "YES";
             sorted = true;
         }else{
            sorted = false;
            // cout << "NO";
         }
    }
    if(sorted ){
        cout << "YES";
    }else{
        cout <<"NO";
    }
    
}