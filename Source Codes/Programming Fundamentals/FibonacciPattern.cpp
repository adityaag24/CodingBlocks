#include <iostream>
using namespace std;
int main(){
    int *fibArray = new int[6000];
    fibArray[0] = 0;
    fibArray[1] = 1;
    for(int i=2;i<6000;i++){
            fibArray[i] = fibArray[i-2]+fibArray[i-1];
    }
    int N;
    cin>>N;
    int noTerms = (N*(N+1))/2;
    int cnt = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<fibArray[cnt++]<<"\t";
        }
        cout<<endl;
    }
}
