#include<stdio.h>
#include<string.h>
int main(){
    int i, k, c;
    char str[1001]={0};
    scanf("%s %d", &str, &k);
    for(i=0;i<strlen(str);i++){
        c=str[i];
        if(c>=65 && c<=90){
            c=c-64;
            //printf("%c=%d\t", c, c);
            c=((c%26)+k)%26;
            if(c==0)
                c=26;
            //printf("%c=%d\t", c, c);
            c+=64;
            str[i]=c;
            //printf("%c\t", str[i]);
        }
        else if(c>=97 && c<=122){
            c=c-96;
            //printf("%c=%d\t", c, c);
            c=((c%26)+k)%26;
            if(c==0)
                c=26;
            //printf("%c=%d\t", c, c);
            c+=96;
            str[i]=c;
            //printf("%c\t", str[i]);
        }
        else if(c>=48 && c<=57){
            c=c-47;
            //printf("%c=%d\t", c, c);
            c=((c%10)+k)%10;
            if(c==0)
                c=10;
            //printf("%c=%d\t", c, c);
            c+=47;
            str[i]=c;
            //printf("%c\t", str[i]);
 
        }
    //printf("\n");
    }
    printf("%s", str);
    return 0;
}