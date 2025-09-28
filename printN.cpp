#include <iostream>
using namespace std;

void printN(int N){
    if (N==1){
        cout<<1<<endl;;
        return;
    }
    printN(N-1);
    cout<<N<<endl;
}
int main(){
    int N=5;
    printN(N);
    return 0;
}