/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<stdio.h>
int main(){
    int i, l, n, L, W;
    scanf("%d", &l);
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &L);
        scanf("%d", &W);
        if (L>=l && W>=l){
            if(L==l && W==l) printf("ACCEPTED\n");
            else if(L==W) printf("ACCEPTED\n");
            else if(L>l || W>l) printf("CROP IT\n");
        }
        else if (L<l || W<l){
            printf("UPLOAD ANOTHER\n");
        }
        
    }
}