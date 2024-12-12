#include<stdio.h>
void rotateToLeft(int *arr,int l,int n){
    
    //Rotating the array to the left n number of times
    for(int i=0;i<n;i++){
        int temp=arr[0];
        for(int j=0;j<l-1;j++){
            arr[j]=arr[j+1];
        }
        arr[l-1]=temp;
    }

    //Printing array elements after rotating it to the left n number of times 
    printf("The elements of the array after rotating it %d times to the left are : ",n);
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }

    return;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    printf("Enter the number of times you want the array to be rotated :");
    int n;
    scanf("%d",&n);

    int l=sizeof(arr)/sizeof(arr[0]);

    rotateToLeft(arr,l,n);
    
    return 0;
}