#include <iostream>
using namespace std;

long long factorial(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int N,R;
    long long nFact = 1, rFact = 1 ,nrFact = 1;
    cin >> N >> R;
    
    nFact = factorial(N);
    rFact = factorial(R);
    nrFact = factorial(N-R);
    cout << nFact/(rFact *nrFact );
    return 0;
}
