/*Duodecimal Number System*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char ddc[9];
    while(~scanf("%s", ddc)){
        int len=strlen(ddc);
        int d[len];
        int i;

        for(i=0;ddc[i]!='\0';i++){
            if(ddc[i]=='a')
                d[i] = 10;
            else if(ddc[i]=='b')
                d[i] = 11;
            else
                d[i] = (int)(ddc[i] - '0');
        }
        for(i=0;i<len;i++){
            if(i==len-1)
                printf("%d\n", d[i]);
            else
                printf("%d ", d[i]);
        }

        int sum=0;
        for(i=0;i<len;i++)
            sum += d[i]*pow(12,len-1-i);
        printf("%d\n", sum);

        int bi[32];
        for(i=0;i<32;i++){
            bi[i]=0;
        }
        for(i=0;i<32;i++){
            if(i!=0 && i%8==0)
                printf(" ");
            bi[31-i] = sum%2;
            sum = sum/2;
            printf("%d", bi[i]);
        }
        printf("\n");
    }
    return 0;
}
