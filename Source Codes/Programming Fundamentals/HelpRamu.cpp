#include <iostream>
using namespace std;
int main(){
    int c1,c2,c3,c4,T,n,m;
    int a[1001],b[1001];
    cin>>T;
    while(T--){
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        int totalA=0,totalB=0,total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            totalA = totalA+min(a[i]*c1,c2);
        }
        totalA = min(totalA,c3);
        for(int i=0;i<m;i++){
            cin>>b[i];
            totalB = totalB+min(b[i]*c1,c2);
        }
        totalB = min(totalB,c3);
        total = min(totalA+totalB,c4);
        cout<<total<<endl;
    }
}
