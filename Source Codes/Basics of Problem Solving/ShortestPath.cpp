#include <iostream>
using namespace std;
int main(){
    char ch;
    int x=0,y=0;
    do{
        ch = cin.get();
        switch(ch){
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }while(ch!='.');
    if (y>0){
        for(int i=0;i<y;i++){
            cout<<'E';
        }
    }
    if (y<0){
        for(int i=y;i>0;i--){
            cout<<'W';
        }
    }
    if(x>0){
        for(int i=0;i<x;i++){
            cout<<'N';
        }
    }
    if(x<0){
        for(int i=x;i>0;i--){
            cout<<'S';
        }
    }
    cout<<endl;
}
