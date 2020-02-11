#include <iostream>
using namespace std;
void converter(int N,int b){
    int dig;
    if(N<=0){
        return;
    }else{
        dig = N % b;
        cout<<dig;
        converter(N/b,b);
    }
}
int main(){
    int N;
    cin>>N;
    converter(N,8);
}
