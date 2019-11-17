/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdio.h>
#include<math.h>
int main(){
    int n, i, b;
    b=((pow(10, 9))+7);
    scanf("%d", &n);
    int ar[1000]={};
    long long pro=1;
    for(i=0;i<n;i++){
        scanf("%d", &ar[i]);
        pro=((pro%b)*(ar[i]%b))%b;
    }
    printf("%d", pro);
}