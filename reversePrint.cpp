#include <iostream>
using namespace std;

void reversePrint(int N){
    if (N==0){
        return;
    }
    cout<<N<<" ";
    reversePrint(N-1);
}
int main(){
      reversePrint(5);
      return 0;
}