#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i==1 || i==N){
            for(int j=1;j<=N;j++){
                cout<<"*"<<"\t";
            }
        }else{
            int noTabs = (N/2)+2- i;
            for(int tabs=1;tabs<=noTabs;tabs++){
                cout<<"*"<<"\t";
            }
        }
        cout<<endl;
    }

}
