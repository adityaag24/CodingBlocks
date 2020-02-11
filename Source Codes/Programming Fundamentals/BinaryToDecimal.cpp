#include <iostream>
#include <math.h>
using namespace std;
long int btod(long int binary){
    long int res=0,cnt=0,dig;
    while(binary!=0){
        dig = binary%10;
        res = res + dig * pow(2,cnt);
        cnt = cnt + 1;
        binary=binary/10;
    }
    return res;
}
int main(){
    long int binary,decimal=0;
    cin>>binary;
    decimal = btod(binary);
    cout<<decimal<<endl;
}
