#include <stdio.h>
#define MAX 2147483647
int DP[MAX];
int fibonacci(int n){
    DP[0]=0;
    DP[1]=1;
    for(int i=2;i<=n;i++){
        DP[i]=DP[i-1]+DP[i-2];
    }
    return DP[n];
}
int main(){
    printf("\t\tFibonacci Series Program\n");
    int num;
    scanf("%d",&num);
    int ans=fibonacci(num);
    printf("%d",ans);
    return 0;
}