#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines for the triangle:");
    scanf("%d",&n);
    int r;
    for (int i=0;i<=n-1;i++){
        for (int k=0;k<=n-i-1;k++){
            printf(" ");
        }
        int first=1;
        for (int j=0;j<=i;j++){
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }

    return 0;
}