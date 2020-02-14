/*String Manage*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char chTransf(char c){
    char c_new;
    int bi[8];
    int i;
    for(i=0;i<8;i++)
        bi[i] = 0;

    if((c>='0'&&c<='9') || (c>='a'&&c<='f') || (c>='A'&&c<='F')){
        for(i=0;i<8;i++){
            bi[i] = c % 2;
            c = c / 2;
        }
        int temp;
        temp = bi[0];
        bi[0] = bi[3];
        bi[3] = temp;
        temp = bi[1];
        bi[1] = bi[2];
        bi[2] = temp;
        temp = 0;
        for(i=0;i<8;i++)
            temp += bi[i]*pow(2,i);
        c_new = (char)temp;
        if(c_new>='a'&&c_new<='z')
            c_new -= 32;
    }
    else
        c_new = c;

    return c_new;
}

int main()
{
    char ch;
    char *str = (char *)malloc(sizeof(char));
    int cnt = 1;
    int i, j;

    while((ch=getchar())!='\n'){
        str = (char *)realloc(str, sizeof(char)*cnt);
        *(str+cnt-1) = ch;
        cnt++;
    }
    str = (char *)realloc(str, sizeof(char)*cnt);
    *(str+cnt-1) = '\0';
//    printf("%s\n", str);
    for(i=0;i<cnt;i++)
        printf("%c", str[i]);
    printf("\n");

    cnt = 1;
    char *s = (char *)malloc(sizeof(char));
    s[0] = str[0];
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(s);j++){
            if(str[i]==s[j])
                break;
        }
        if(j==strlen(s)){
            s = (char *)realloc(s, sizeof(char)*(++cnt));
            *(s+cnt-1) = str[i];
        }
    }
//    printf("%s\n", s);
    for(i=0;i<cnt;i++)
        printf("%c", s[i]);
    printf("\n");

    for(i=0;i<cnt;i++)
        s[i] = chTransf(s[i]);

//    printf("%s\n", s);
    for(i=0;i<cnt;i++)
        printf("%c", s[i]);
    printf("\n");

    return 0;
}
