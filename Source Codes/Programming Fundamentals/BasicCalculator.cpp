#include <iostream>
using namespace std;
int main(){
    char ch;
    int a,b,res,result=0;
    while((cin.get(ch))){
        if (ch=='x' || ch=='X'){
            break;
        }else if(ch=='+'){
            cin>>a>>b;
            res = a+b;
            result = 1;
        }else if(ch=='-'){
            cin>>a>>b;
            res = a-b;
            result = 1;
        }else if(ch=='*'){
            cin>>a>>b;
            res = a*b;
            result = 1;
        }else if(ch=='/'){
            cin>>a>>b;
            res = a/b;
            result = 1;
        }else if(ch=='%'){
            cin>>a>>b;
            res = a%b;
            result = 1;
        }else{
            cout<<"Invalid operation. Try again."<<endl;
        }
        if (result==1){
            cout<<res<<endl;
            result = 0;
        }
        cin.get();
    }

}
