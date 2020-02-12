/*String Compress*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1024

int main()
{
    char s[MAX_SIZE+1];
    while(~scanf("%s", s)){
        int len = strlen(s);
        int i;

        if(len%2){
            s[len] = '0';
            s[len+1] = '\0';
            len++;
        }

        char s_new[len/2 + 1];
        for(i=0;i<len/2;i++){
            s_new[i] = (s[i*2]-'0')*10 + (s[i*2+1]-'0') + 32;
        }
        s_new[len/2]='\0';

        printf("%s\n", s_new);
    }
    return 0;
}
