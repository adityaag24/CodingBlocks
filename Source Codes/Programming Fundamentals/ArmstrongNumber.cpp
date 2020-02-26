#include <iostream>
#include <math.h>
using namespace std;
int numDigits(long long int N){
    int cnt = 0;
    while(N!=0){
        cnt = cnt + 1;
        N = N/10;
    }
    return cnt;
}
bool isArmstrong(long long int N,int noOfDigits){
    long long int res=0,cpy=N;
    while(N!=0){
        int d = N%10;
        res = res + pow(d,noOfDigits);
        N = N/10;
    }
    if (res==cpy){
        return true;
    }
    return false;
}
int main(){
    long long int N;
    cin>>N;
    int noOfDigits = numDigits(N);
    bool armstrong = isArmstrong(N,noOfDigits);
    if(armstrong){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}
