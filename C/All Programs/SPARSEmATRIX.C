#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter elements of the array:");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if (arr[i][j]==0){
                count++;
            }
        }
    }
    if (count>(r*c)/2){
        printf("Sparse Matrix");
    }else{
        printf("Not a Sparse Matrix");
    }
    return 0;
}