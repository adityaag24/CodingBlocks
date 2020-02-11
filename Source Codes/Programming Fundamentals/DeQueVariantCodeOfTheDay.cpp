#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int N,num;
    cin>>N;
    int *a = new int[N];
    int i=0,j=N-1;
    int temp = N;
    while(N>0){
        cin>>num;
        if (num==1){
            a[j--] = num;
        }else{
            a[i++] = num;
        }
        N--;
    }
    for(int i=0;i<temp;i++){
        if (i<(temp-1)){
            cout<<a[i]<<" ";
        }else{
            cout<<a[i];
        }
    }
    cout<<endl;
}
