#include<iostream>
using namespace std;

long long fact(long long f){
    long long fCal = 1;
    if(f == 0 ){
        return 1;
    }
    for(long long i =1; i<=f ; i++){
        fCal = fCal * i;
    }
    return fCal;
}

int main(){
    long long a,b;
    cin >>a >>b;
    long long aFact = fact(a);
    long long bFact = fact(b);
    if(aFact == bFact){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
}