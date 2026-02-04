#include<iostream>
using namespace std;

int global = 10;

void f(){
    //variable 'x' can not be accessed in this function
   // cout << x << endl;
   cout << "Inside f func" << endl;
   cout << global << endl;
}

int main(){
    //variable x is defined in main() func
    //as main() is over, so the scope of varaible x
    f();
    int x = 10;
    cout << x << endl;

    cout << "Inside main func" << endl;
    cout << global << endl;

    int global = 100;
    //variable shadowing
    cout << "It prefers the nearest declaration"<< endl;
    cout << global << endl;
    cout << "Accesiing global var with :: operator" << endl;
    cout << ::global << endl;

    if(true){
        int y = 6;
        cout << y << endl;
    }
    //both 'x' variables have different scopes,
    //so, can be accessed in respective scopes
    if(true){
        int x = 20;
        cout << x << endl;
    }
    //scope of variable 'y' is upto 'if' statement only    
    //cout << y << endl;

    //both 'i' variables in 'for-loops' have scope inside their owns loops
    for(int i = 0; i < 10 ; i++){
        cout << i << " ";
    }
    cout << endl;
    for(int i = 0; i < 5 ; i++){
        cout << i << " ";
    }
    cout << endl;

}
//can not be accessed here, as its scope is limited to main() function
//cout << x << endl;
