#include<iostream>
using namespace std;


int main(){
    //number of test cases
    long t;
    cin >> t;
    //filling array(s) for cases
    for( long long i = 1; i <= t ; i++ ){
        long long n; //array size
        cin >> n;
        long long arr[n];
        //filling array(s) 
        for(long long j = 0; j < n; j++){
            cin >> arr[j];
        }
        
        long long cZero = 0, cOne = 0;
        for( long long j = 0; j  < n ;  j++){
           // cout<<"In counting ZEROS: " << j << endl;
            if(arr[j]==0){
                cZero++;
            }
        }
        for( long long j = 0; j  < n ; j++){
            //cout<<"In counting ONES:: " << j << endl;
            if(arr[j]==1){
                cOne++;
            }
        }
        //printing the processed array
        for( long long j=0 ; j < cZero; j++ ){
            
            cout << 0 << " ";
        }
         for( long long j=0 ; j < cOne; j++ ){
            
            cout << 1 << " ";
        }
        cout << endl;
      }
    
    
}