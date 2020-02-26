#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if (N==1){
        cout<<"1"<<endl;
    }else{
        cout<<"1"<<endl;
        cout<<"11"<<endl;
        if(N>2){
            for(int i=3;i<=N;i++){
                cout<<i-1;
                for(int j=1;j<=i-2;j++){
                    cout<<"0";
                }
                cout<<i-1<<endl;
            }
        }
    }
}
