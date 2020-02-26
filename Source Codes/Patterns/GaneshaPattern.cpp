#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    cout<<"*";
    for(int spaces=1;spaces<=(N-3)/2;spaces++){
        cout<<" ";
    }
    for(int j=1;j<=(N+1)/2;j++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=(N-3)/2;i++){
        cout<<"*";
        for(int spaces=1;spaces<=(N-3)/2;spaces++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=1;i<=N;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=(N-3)/2;i++){
        for(int spaces=1;spaces<=((N+1)/2)-1;spaces++){
            cout<<" ";
        }
        cout<<"*";
        for(int spaces=1;spaces<=(N-3)/2;spaces++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int j=1;j<=(N+1)/2;j++){
        cout<<"*";
    }
    for(int spaces=1;spaces<=(N-3)/2;spaces++){
        cout<<" ";
    }
    cout<<"*"<<endl;

}
