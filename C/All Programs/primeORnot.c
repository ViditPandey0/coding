#include<stdio.h>
int main(){
    int n,isPrime=1;
    scanf("%d",&n);
    if (n<=1){
        printf("Not prime");
    }else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime){
            printf("Prime Number");
        }else{
            printf("Not a prime number");
    }
    }
    return 0;
}