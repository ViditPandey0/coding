#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to get its factorial:");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("The factorial of the entered number is %d",fact);
    return 0;
}
