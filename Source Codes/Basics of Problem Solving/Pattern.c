#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i,col,j,k,l,spaces;
    i = 1;
    while (i<=N) {
        spaces = 1;
        while (spaces <= N-i){
            printf(" ");
            spaces = spaces+1;
        }
        col = (2*i) - 1;
        k = i;
        l = 1;
        while (l<=(col/2)){
            printf("%d",k);
            k = k+1;
            l = l+1;
        }
        while (l<=col){
            printf("%d",k);
            k = k - 1;
            l = l + 1;
        }
    i = i+1;
    printf("\n");
    }
}
