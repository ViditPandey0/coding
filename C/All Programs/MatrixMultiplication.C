        #include<stdio.h>
        int main(){
            //Input elements of  the first matrix
            int r1,c1;
            printf("Enter number of rows for the first matrix:");
            scanf("%d",&r1);
            printf("Enter number of columns for the first matrix:");
            scanf("%d",&c1);
            int arr1[r1][c1];
            printf("Enter elements of the 1st 2-D array:");
            for (int i=0;i<r1;i++){
                for (int j=0;j<c1;j++){
                    scanf("%d",&arr1[i][j]);
                }
            }

            //Input elements of the second matrix
            int r2,c2;
            printf("Enter number of rows:");
            scanf("%d",&r2);
            printf("Enter number of columns:");
            scanf("%d",&c2);
            int arr2[r2][c2];
            printf("Enter elements of the 2nd 2-D array:");
            for (int i=0;i<r2;i++){
                for (int j=0;j<c2;j++){
                    scanf("%d",&arr2[i][j]);
                }
            }

            //Print elements of the first matrix
            for (int i=0;i<r1;i++){
                for (int j=0;j<c1;j++){
                    printf("%d ",arr1[i][j]);
                }
                printf("\n");
            }

            //Print elements of the second matrix
            for (int i=0;i<r2;i++){
                for (int j=0;j<c2;j++){
                    printf("%d ",arr2[i][j]);
                }
                printf("\n");
            }

            if (c1==r2){
                int arr3[r1][c2];
                for (int i=0;i<r1;i++){
                    for (int j=0;j<c2;j++){
                        arr3[i][j]=0;
                        for(int k=0;k<c1;k++){
                            arr3[i][j]+=arr1[i][k]*arr2[k][j];  
                        }
                    }
                }

                //Printing the new matrix
                for (int i=0;i<r1;i++){
                    for (int j=0;j<c2;j++){
                        printf("%d ",arr3[i][j]);
                    }
                    printf("\n");
                }
            }else{
                printf("Matrix multiplication isn't possible");
            }

            
            return 0;
        }