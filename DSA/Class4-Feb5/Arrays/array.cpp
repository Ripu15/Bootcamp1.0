#include<iostream>
using namespace std;

int main(){
    int marks[6];
    
    for(int i = 0; i < 5;i++){
        cin >> marks[i];
    }
    for(int i = 0; i < 5; i++){
        cout << marks[i] << endl;
    }
    cout << marks[6] << endl;//garbage value
    cout << marks[800]<< endl;
    cout << marks[-2]<< endl;
}