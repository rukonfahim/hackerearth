/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0, a=0, pali=0, flag=0;
    scanf("%s", str);
    a=strlen(str);
    //if(a%2==0)
    flag=a/2;
    for(i=0;i<flag;i++){
        if(str[i]!=str[(a)-i-1]) break;
        else if(strlen(str==1)) pali=1;
        else pali=1;
    }
    if(pali) printf("YES");
    else printf("NO");
}