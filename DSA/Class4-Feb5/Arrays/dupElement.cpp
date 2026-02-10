#include<iostream>
using namespace std;


int main(){
    //number of test cases
    long t;
    cin >> t;
    //filling array(s) for cases 't'
    for( long long i = 1; i <= t ; i++ ){
        long long n; //array size
        cin >> n;
        long long arr[n];
        for(long long j = 0; j < n; j++){
            cin >> arr[j];
        }
        //dulpicate element logic
        for( long long j = 0; j < n ; j++){
            for(long long k = j+1; k < n; k++){
                if(arr[j]==arr[k]){                 
                    cout << arr[k]<<endl;
                    break;
                }
            }
        }
      }      
}