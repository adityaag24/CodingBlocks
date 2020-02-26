#include <iostream>
using namespace std;
int main(){
    int N,dig,d;
    cin>>N>>dig;
    int sum = 0;
    while(N!=0){
        d = N % 10;
        if(d==dig){
            sum++;
        }
        N = N/10;
    }
    cout<<sum<<endl;
}
