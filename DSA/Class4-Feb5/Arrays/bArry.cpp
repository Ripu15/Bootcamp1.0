#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i=0; i < n ; i++){
        cin >> arr[i];
    }
    //logic
    //let arr=[1,2,3,4,5]
    long long count = 0;
    for(long long i = 0; i < n; i++){
        if(arr[i] == arr[i+1]){
            count++;
            //cout << "count:" << count << " ";
        }
    }
    if(count == n-1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}