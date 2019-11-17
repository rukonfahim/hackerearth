/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdio.h>
 
int main(){
    long n, i;
    int  q, a, b, j, count=0;
    
    scanf("%ld %d", &n, &q);
    
    long arr[n], avg=0, sum=0;
    for(i=0;i<n;i++){
        scanf("%ld", &arr[i]);
    }
    
    while(q--){
        sum=0, j=0;
        scanf("%d %d", &a, &b);
        for(count=(a-1);count<b;count++){
            sum=sum+arr[count];
            j++;
        }
        avg=sum/j;
            printf("%ld\n", avg);
    }
}