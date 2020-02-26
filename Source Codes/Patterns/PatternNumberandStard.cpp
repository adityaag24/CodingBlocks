#include <iostream>
using namespace std;
int main(){
    int N,j,k;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(k=1;k<=N-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

}
