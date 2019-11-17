/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <stdio.h>
 
int main()
{
    int n;
 
    while(scanf("%d", &n) != EOF){
        if(n == 42)
            break;
        printf("%d\n", n);
    }
 
    return 0;
}