#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",&str);
    getchar();

    char c;
    printf("Enter the character to check its occurence in the string:");
    scanf("%c",&c);

    int l=strlen(str);
    int j=0;
    for (int i=0;i<l;i++){
        if (c==str[i])
        j++;
    }
    printf("Number of occurences of character '%c' : %d",c,j);
    return 0;
}