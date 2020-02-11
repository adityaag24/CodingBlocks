#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,x,y;
    cin>>a>>b>>c;
    double d;
    d = (b*b)-(4*a*c);
    if (d==0){
        cout<<"Real and Equal"<<endl;
        x = -b/(2*a);
        cout<<x<<" "<<x<<endl;
    }else if(d>0){
        x = (-b+sqrt(d))/(2*a);
        y = (-b-sqrt(d))/(2*a);
        cout<<"Real and Distinct"<<endl;
        cout<<y<<" "<<x<<endl;
    }else{
        cout<<"Imaginary"<<endl;
    }

}
