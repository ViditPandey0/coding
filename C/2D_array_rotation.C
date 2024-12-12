#include<stdio.h>

//void clockwiseRotation(int *arr , int row , int column){
    
  //  return;
//}

int main(){

    //Inputting the dimensions of the 2D array 
    int r,c;
    printf("Enter the number of rows for the 2D array:");
    scanf("%d",&r);
    printf("Enter the number of columns for the 2D array:");
    scanf("%d",&c);
    int arr[r][c];

    //Inputting the elements of the 2D array
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //Copying the 2D array elements to another array
    int cpyarr[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cpyarr[i][j]=arr[i][j];
        }
    }

    //Checking which direction to rotate the array
    printf("Enter 1 to rotate the array clockwise.\nEnter 2 to rotate the array anticlockwise.\nEnter your choice : ");
    int choice;
    scanf("%d",&choice);
    
    int n;

    if(choice==1){
        printf("Enter the number of times you want the array to be rotated clockwise :");
        scanf("%d",&n);
        //Rotating the array clockwise n number of times
        for (int count=0;count<n;count++){
            for(int i=0;i<3;i++){
                int k=0;
                for (int j=2;j>=0;j--){
                    cpyarr[i][k]=arr[j][i];
                    k++;
                }
            }
        }
    }else if (choice==2){
        printf("Enter the number of times you want the array to be rotated anticlockwise :");
        scanf("%d",&n);
    }
    

    

    //Printing the 2D array after clockwise rotation
    printf("The elements of 2D array elements after clockwise rotating it %d times are \n",n);
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}