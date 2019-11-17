/*
// Sample code to perform I/O:
 
scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
main(){
    int i,n, fact=1;
    scanf("%d", &n);
    if(n==1 || n==0) 
        printf("1");
    else if (n>1){
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("%d", fact);
    }
}
