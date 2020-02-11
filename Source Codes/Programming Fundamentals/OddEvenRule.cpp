#include <iostream>
using namespace std;
int sumOfDigitsEven(int N){
    int sum = 0,dig;
    while(N>0){
        dig = N%10;
        if (dig%2==0){
            sum = sum + dig;
        }
        N = N/10;
    }
    return sum;
}
int sumOfDigitsOdd(int N){
    int sum = 0,dig;
    while(N>0){
        dig = N%10;
        if (dig%2==1){
            sum = sum + dig;
        }
        N = N/10;
    }
    return sum;
}
int main(){
    int N,carNo,digitSumEven,digitSumOdd;
    cin>>N;
    while(N!=0){
        cin>>carNo;
        digitSumEven = sumOfDigitsEven(carNo);
        digitSumOdd = sumOfDigitsOdd(carNo);
        if (digitSumEven%4==0 or digitSumOdd%3==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        N--;
    }

}
