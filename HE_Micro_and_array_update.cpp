/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdlib.h>
#include<stdio.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main(){
    int T, n, k;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &n, &k);
        int A[n];
        for(int i=0;i<n;i++)
            scanf("%d", &A[i]);
        qsort(A, n, sizeof(int), cmpfunc);
        n=k-A[0];
        printf("%d\n",n);
    }
    return 0;
}