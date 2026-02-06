#include<iostream>
using namespace std;

int main(){
    long long n;
    long long sum = 0;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout << sum ;
}