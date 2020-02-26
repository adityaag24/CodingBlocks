#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        for(int j=i;j<=(N*2)-2-i;j++){
            cout<<"\t";
        }
        if(i==N){
            for(int j=i-1;j>=1;j--){
                cout<<j<<"\t";
            }
        }else{
            for(int j=i;j>=1;j--){
                cout<<j<<"\t";
            }
        }
        cout<<endl;
    }

}
