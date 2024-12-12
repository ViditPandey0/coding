#include<stdio.h>
#include<string.h>
int main(){
    char str[50]="popa";
    //str[3]='\0';
    char str2[53];
    strcpy(str2,str);
    strrev(str);
    if (strcmp(str,str2)==0){
        printf("Palindrome string.\n");
    }else{
        printf("Not a palindrome string.\n");
    }
    //printf("%d %d",strlen(str),sizeof(str2));
    // strcat(str2,str);
    // printf("%s",str2);
    return 0;
}