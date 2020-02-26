#include <iostream>
using namespace std;
bool isPythagoreanTriplet(long long int first,long long int second,long long int third){
    long long int res = (third*third)-(first*first)-(second*second);
    if(res==0){
        return true;
    }
    return false;
}
int main(){
    long long int N,res2,res1;
    cin>>N;
    if (N%2==0){
        res1 = (N*N)/4 - 1;
        res2 = (N*N)/4 + 1;
    }else{
        res1 = ((N*N)-1)/2;
        res2 = ((N*N)+1)/2;
    }
    bool isPTriplet = isPythagoreanTriplet(N,res1,res2);
    if(isPTriplet){
        cout<<res1<<" "<<res2<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
