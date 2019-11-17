/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdio.h>
int main(){
    int n, m, k=-1, i;
    scanf("%d %d",&n, &m);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==m)
            k=i+1;
    }
    printf("%d", k);
}