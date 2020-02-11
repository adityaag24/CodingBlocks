#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int row=1;row<=N;row++){
        if(row%2==1){
            cout<<'1';
            if (row!=1){
                for(int j=1;j<=row;j++){
                    if(j%2==1){
                        cout<<'0';
                    }else{
                        cout<<'1';
                    }
                }
            }
        }else{
            cout<<'0';
            for(int j=1;j<=row;j++){
                if(j%2==1){
                    cout<<'1';
                }else{
                    cout<<'0';
                }
            }
        }
        cout<<endl;
    }

}
