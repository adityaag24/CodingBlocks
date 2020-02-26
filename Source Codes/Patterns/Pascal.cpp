#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N][N];
    for(int line=0;line<N;line++){
        for(int spaces=1;spaces<=N-line;spaces++){
            cout<<" ";
        }
        for(int i=0;i<=line;i++){
            if(line==i || i==0){
                arr[line][i] = 1;
            }else{
                arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
            }
            cout<<arr[line][i]<<" ";
        }
        cout<<endl;
    }
}
