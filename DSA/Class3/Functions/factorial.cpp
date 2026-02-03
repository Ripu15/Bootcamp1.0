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
    int N;
    cin >> N;

    cout << factorial(N);
    return 0;
}
