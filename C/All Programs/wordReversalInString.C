#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter string:");
    scanf("%[^\n]s",&str);
    int l=strlen(str);
    int l1,l2;

    //Determine length of 1st string
    for (int i=0;i<l;i++){
        if (str[i]==' '){
            l1=i;
            break;
        }
    }

    //Determine length of string 2
    // for (int i=l1+2;i<l;i++){
    //     if (str[i]==' '){
    //         l1=i;
    //         break;
    //     }
    // }
    l2=l-l1-2;

    return 0;
}