#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n==1){
        printf("1");
    }else {
        while(n!=1){
            if(n%2==1){
                printf("%d",0);
                break;
            }
            if(n%2==0){
                n=n/2;
                if(n==1){
                    printf("%d",1);
                    break;
                }
            }
        }
    }
    return 0;
}