#include<stdio.h>
int change(int n){
    if(n==0) return 1;
    else return 0;
}
int main(){
    //int x=1,y=8,z=3;
    //int s;
    //s=x+y+z;
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    // printf("%d %d",r,c);
    int n=0;
    for (int i=0;i<r;i++){
        if (i%2==0) n=0;
        for(int j=0;j<=i;j++){
            
            printf("%d ",n);
            n=change(n);
        }
        printf("\n");
    }
    // printf("%d",change(n));
    return 0;
}