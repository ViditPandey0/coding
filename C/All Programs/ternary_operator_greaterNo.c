#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first no.:");
    scanf("%d",&a);
    printf("Enter second no.:");
    scanf("%d",&b);
    a>b ? printf("%d is greater.",a) : printf("%d is greater.",b);
    return 0;
}