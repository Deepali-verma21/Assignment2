#include <iostream>
using namespace std;

int sumN(int N){
    if (N==0){
        return 0;
    }
    int sum = N + sumN(N-1);
    return sum;
}
int main(){
    cout<<sumN(5)<<endl;
    return 0;
}