#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int N,i,sum,d;
    cin>>N;
    while(N>0){
        cin>>i;
        sum = 0;
        int cnt = 0,p;
        while (i>0){
            d = i%10;
            p = pow(2,cnt);
            if (d!=0){
                sum = sum + d*p;
            }
            cnt = cnt + 1;
            i = i/10;
        }
        N--;
        cout<<sum<<endl;
    }
}
