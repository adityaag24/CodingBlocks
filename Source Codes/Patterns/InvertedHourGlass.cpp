#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<N-j+1<<" ";
        }
        int noSpaces = ((N-i+1)*(N-1))-1;
        //cout<<"I : "<<i<<"noSpaces : "<<noSpaces<<endl;
        for(int spaces=1;spaces<noSpaces;spaces++){
            cout<<" ";
        }
        for(int j=N-i+1;j<=N;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int j=N;j>=0;j--){
        cout<<j<<" ";
    }
    for(int j=1;j<=N;j++){
        cout<<j<<" ";
    }
    cout<<endl;
    for(int i=1;i<=N;i++){
        for(int j=N;j>=i;j--){
            cout<<j<<" ";
        }
        int noSpaces = (i*(N-1))-1;
        //cout<<"I : "<<i<<"noSpaces : "<<noSpaces<<endl;
        for(int spaces=1;spaces<noSpaces;spaces++){
            cout<<" ";
        }
        for(int j=i;j<=N;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
