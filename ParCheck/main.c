/*parity check*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    int bi[8];
    while(~scanf("%s", ch)){
        int i, j, sum;
        for(i=0;ch[i]!='\0';i++){
            sum = 0;
            for(j=7;j>0;j--){
                bi[j] = ch[i]%2;
                ch[i] = ch[i]/2;
            }
            for(j=1;j<8;j++){
                sum += bi[j];
            }
            if(sum%2)
                bi[0] = 0;
            else
                bi[0] = 1;
            for(j=0;j<8;j++){
                printf("%d", bi[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
