#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    while(N>0){
        sum = sum + (N%10);
        N = N/10;
    }
    printf("%d\n",sum);
}
