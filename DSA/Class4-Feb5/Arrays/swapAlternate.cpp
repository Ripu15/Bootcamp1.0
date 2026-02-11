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
        for(long long j = 0; j < n; j++){
            cin >> arr[j];
        }
        //swap logic
        for( long long j = 0; j + 1 < n ; j = j+2){
            cout<<"In swap logic: j: " << j << endl;
            swap(arr[j],arr[j+1]);
        }
        //printing the processed array
        for( long long j=0 ; j < n; j++ ){
            //cout << "In output logic"<<endl;
            cout << arr[j] << " ";
        }
        cout << endl;
      }
    
    
}