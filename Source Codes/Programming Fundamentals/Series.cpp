#include <iostream>
using namespace std;
int main(){
    int N1,N2,nextTerm,cnt = 0,enumerator=1;
    cin>>N1>>N2;
    while(cnt!=N1){
        nextTerm = 3*enumerator + 2;
        if(nextTerm % N2 != 0){
            cout<<nextTerm<<endl;
            cnt++;
        }
        enumerator++;
    }

}
