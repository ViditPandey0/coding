#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter string:");
    scanf("%[^\n]s",&str);
    int l=strlen(str);
    for (int i=0;i<l;i++){
        if (str[i]==','){
            i=i+1;
            printf("\n");
        }
        printf("%c",str[i]);
    }
    return 0;
}