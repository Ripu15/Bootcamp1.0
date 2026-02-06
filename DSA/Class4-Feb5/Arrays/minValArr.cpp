#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     long long min = arr[0];
     long long pos = 1;
     for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            pos= i+1;
        }
    }
    cout << min << " " << pos ;
}