#include<stdio.h>
int main(){
    int a=0,b=1;
    printf("Enter the number of integers of Fibonacci series you want to be printed:");
    int n;
    scanf("%d",&n);
    if(n==0){}
    else if(n==1) printf("0");
    else if(n==2) printf("%d %d",a,b);
    else {
        printf("%d %d ",a,b);
        for (int i=3;i<=n;i++){
            //int sum=a+b;
            printf("%d ",a+b);
            int temp=b;
            b=a+b;
            a=temp;
        }
    }
    return 0;
}