#include <iostream>
using namespace std;
int main(){
    int n,c,p;
    bool validFlag=true,decreasing=true;
    cin>>n;
    cin>>p;
    while(--n){
        cin>>c;
        if (c==p){
            validFlag = false;
            break;
        }
        else if(c > p){
            decreasing=false;
        }
        else if(!decreasing && c<p){
            validFlag = false;
            break;
        }
        p = c;
    }
    if (validFlag){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
