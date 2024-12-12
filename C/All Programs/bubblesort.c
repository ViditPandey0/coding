#include<stdio.h>
int main(){
    int arr[]={3,2,5,4,8,7,9};
    for (int i=0;i<sizeof(arr)/4-1;i++){
        for (int j=0;j<sizeof(arr)/4;j++){
            int temp=arr[j+1];
            if(arr[j]>arr[j+1]){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0;i<sizeof(arr)/4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}