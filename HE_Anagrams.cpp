/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
 
int main()
{
    int T;
    scanf("%d", &T);
 
    while(T--)
    {
        int i, sum = 0, arr1[26] = {}, arr2[26] = {};
        char str1[10001], str2[10001];
        scanf("%s %s", str1, str2);
 
        for(i=0; i<strlen(str1); i++)
            arr1[str1[i]-'a']++;
 
        for(i=0; i<strlen(str2); i++)
            arr2[str2[i]-'a']++;
 
        for(i=0; i<26; i++)
            sum = sum + abs(arr1[i] - arr2[i]);
 
        printf("%d\n", sum);
    }
 
    return 0;
}