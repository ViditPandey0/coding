#include<stdio.h>
void DecimalToBinary(int x){
    int binary[32];
    int i=0;
    while(x>0){
        binary[i]=x%2;
        x=x/2;
        i++;
    }
    printf("Binary form:");
    for (int j=i-1;j>=0;j--){
        printf("%d",binary[j]); 
    }
    printf("\n");
    return ;
}
int main(){
    int decimal;
    scanf("%d",&decimal);
    DecimalToBinary(decimal);
    printf("Octal form:%o\n",decimal);
    printf("Hexadecimal form:%X",decimal);
    return 0;
}