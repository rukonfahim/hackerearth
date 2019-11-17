#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int a;
    int sum1=0,sum2=0;
    scanf("%d", &a);
    for (int i = 0 ; i < a; i++)
    {
        char str1[100000],str2[100000];
        scanf("%s",str1 );
        scanf("%s",str2 );
        //printf("%s,%s\n",str1,str2);
        int j, k = strlen(str1);
        for (j = 0; j < k; j++ )
        {
          int m = str1[j]*(str1[j]-96);    
          sum1 = sum1+m;
          int l = str2[j]*(str2[j]-96);
          sum2 = sum2+l;
        }
        //printf("%d",sum2);
        if (sum1 == sum2)
        printf("YES\n");
        else
        printf("NO\n");
        sum1=0;
        sum2=0;
    }
}
