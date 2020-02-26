#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int spaces=1;spaces<=N-i;spaces++){
            cout<<"\t";
        }
        for(int j=i;j<=(2*i)-1;j++){
            cout<<j<<"\t";
        }
        for(int j=(2*i)-2;j>=i;j--){
            cout<<j<<"\t";
        }
        cout<<endl;
    }

}
