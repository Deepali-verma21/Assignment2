#include <bits/stdc++.h>
using namespace std;

int rabbits(int n) {
    if (n <= 2) return 1;
    return rabbits(n-1) + rabbits(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << rabbits(n);
    return 0;
}
