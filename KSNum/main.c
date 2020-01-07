/*ÊØĞÎÊı*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(~scanf("%d", &x)){
        if(x<2 || x>=100){break;}
        else{
            int x2 = x * x;
            int cnt=1,flg=0;
            while(x2 > cnt){
                if(x2%cnt==x){
                    flg=1;
                    break;
                }
                cnt=cnt*10;
            }
            if(flg) printf("Yes!\n");
            else printf("No!\n");
        }
    }
    return 0;
}
