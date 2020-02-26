#include <iostream>
using namespace std;
int main(){
    int lower,higher,celsius,step;
    cin>>lower>>higher>>step;
    for(int fahr = lower;fahr<=higher;fahr+=step){
        celsius = 5*(fahr-32)/9;
        cout<<fahr<<" "<<celsius<<endl;
    }

}
