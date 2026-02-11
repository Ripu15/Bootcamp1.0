#include<iostream>
using namespace std;
int main(){
    long long n ,x ,count = 0;
    cin >> n >> x;
    long long arr[n];
    //filling array
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    //occurance logic
    for(long long i = 0; i < n; i++){
        if(arr[i]==x){
            count++;
        }
    }
    cout << count;
}