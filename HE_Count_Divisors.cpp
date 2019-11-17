/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdio.h>
int main(){
    int l, r, k, i, count=0;
    scanf("%d %d %d", &l, &r, &k);
    for(i=l;i<=r;i++){
        if(i%k==0)
        count++;
    }
    printf("%d", count);
}