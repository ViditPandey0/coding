#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter elements of the 2-D array:");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[c][r];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            arr2[j][i]=arr[i][j];
        }
    }
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}