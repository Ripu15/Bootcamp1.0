#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int odd[n];
    int even[n]; 
    
    //filling array
    for(int i = 0; i < n ; i++ ){
        arr[i]= i;
    }
    
    //filled even and odd arrays
    for(int i = 0; i < n ;i++){
        if(arr[i]%2==0){
            even[i] = i;
        }
        else{
            odd[i] = i;
        }
    }
    
    //sorting the odd array in ascending order
    int oddLength = sizeof(odd) / sizeof(odd[0]);
    sort(odd,odd + oddLength);
    
    //sorting the even array in descending order
    int evenLength = sizeof(even) / sizeof(even[0]);
    sort(even, even + evenLength);
    reverse(even, even + evenLength);
    
    
    for(int i = 0 ; i < oddLength ;i++){
        arr[i] = odd[i];
    }
    for(int i = oddLength ; i < oddLength + evenLength ;i++){
        arr[i] = even[i];
    }
    
    //Diplaying th final array
    for(int i =0 ;i < n ;i++){
        cout << arr[i];
    }
}