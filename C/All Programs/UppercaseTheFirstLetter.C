#include<stdio.h>
#include<string.h>
int main(){
    //Input the string
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",&str);
    getchar();

    //Counting the number of letters that need to be capitalized
    int l=strlen(str);
    int count=1;
    for(int i=0;i<l;i++){
        if (str[i]==' ')
        count++;
    }

    //Inputting the position of each letter of the string that needs to be capitalized into an array
    int firstCharArr[count];
    firstCharArr[0]=0;
    int j=1;
    for(int i=0;i<l;i++){
        if (str[i]==' '){
            firstCharArr[j]=i+1;
            j++;
            if(j==count){
                j=j-1;
            }
        }
    }

    //Capitaling the first letter of each word in the string
    for(j=0;j<count;j++){
        str[firstCharArr[j]]=str[firstCharArr[j]]-32;
    }

    //Printing the string with each first character of each word capitalized
    printf("Updated string with each first character of each word capitalized : %s",str);
    return 0;
}
