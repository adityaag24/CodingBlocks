#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=(N/2)+1;i++){
        int noSpaces = (N*2)-((i-1)*((N/2)+1))-2;
        for(int spaces=1;spaces<=noSpaces;spaces++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            if (j!=1){
                cout<<j<<" ";
            }else{
                cout<<j;
            }
        }
        noSpaces = (i-1)*((N/2)+1) - 1;
        for(int spaces=1;spaces<=noSpaces;spaces++){
            cout<<" ";
        }
        if (i!=1){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=N/2;i>=1;i--){
        int noSpaces = (((N/2)+1)-i)*((N/2)+1);
        for(int spaces=1;spaces<=noSpaces;spaces++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            if (j!=1){
                cout<<j<<" ";
            }else{
                cout<<j;
            }
        }
        noSpaces = (i-1)*((N/2)+1) - 1;
        for(int spaces=1;spaces<=noSpaces;spaces++){
            cout<<" ";
        }
        if (i!=1){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
