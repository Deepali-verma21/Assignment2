#include <bits/stdc++.h>
using namespace std;

long long ways(int n) {
    if (n <= 1) return 1;
    return n * ways(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << ways(n);
    return 0;
}
