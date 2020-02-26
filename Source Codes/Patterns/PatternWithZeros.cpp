#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<i<<"\t";
        for(int j=1;j<=i-2;j++){
            cout<<0<<"\t";
        }
        if(i!=1){
            cout<<i<<"\t";
        }
        cout<<endl;
    }
}
