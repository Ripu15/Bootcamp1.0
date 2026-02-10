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
        //Missing element logic
        //[1,1,2,2,3]
        int count = 0;
        for( long long j = 0; j < n ; j++){
            for(long long k = 0; k < n; k++){
                if(arr[j]==arr[k]){    
                    count++;         
                }  
            }
            if(count == 1){
                cout << arr[j] << endl;
            }
            count = 0;
        }  
    }      
}