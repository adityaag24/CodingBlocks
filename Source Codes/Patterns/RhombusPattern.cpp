#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        int noSpaces = N-i;
        for(int spaces=1;spaces<=noSpaces;spaces++){
            cout<<" ";
        }
        if(i==1 || i==N){
            for(int i=1;i<=N;i++){
                cout<<"*";
            }
        }else{
            cout<<"*   *";
        }
        cout<<endl;
    }
}
