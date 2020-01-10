/*palindrome string*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[1000];
    while(~scanf("%s", ch)){
        int i, flg=0, len=strlen(ch);
        for(i=0;i<len/2;i++){
            if(ch[i]!=ch[len-1-i]){
                flg=1;
                break;
            }
        }

        if(flg) printf("No!\n");
        else printf("Yes!\n");
    }
    return 0;
}
