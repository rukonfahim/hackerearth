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
    int n=0, i;
    char str[100];
    scanf("%s", str);
    for(i=0;i<strlen(str);i++){
        
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        else if (str[i]>='a' && str[i]<='z')
            str[i]-=32;
        }
    printf("%s", str);
    return 0;
}