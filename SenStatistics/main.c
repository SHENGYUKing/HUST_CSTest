/*Sentences Statistics*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1024

int main()
{
    char s[MAX_SIZE+1];
    while(gets(s)!=NULL){
        int i;
        int cnt1=0, cnt2=0;
        int list[27];

        for(i=0;i<27;i++){
            list[i]=0;
        }

        for(i=0;s[i]!='\0';i++){
            if(s[i]>='a' && s[i]<='z'){
                cnt1++;
                list[(int)(s[i]-'a')] += 1;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                cnt1++;
                list[(int)(s[i]-'A')] += 1;
            }
            else if(s[i]==' '){
                cnt2++;
            }
        }
        printf("字母个数: %d\n", cnt1);
        printf("单词个数: %d\n", cnt2 + 1);

        int cnt=0, max=0;
        for(i=0;i<27;i++){
            if(list[i] > max)
                max = list[i];
        }

        printf("最多的字母: ");
        for(i=0;i<27;i++){
            if(list[i] == max)
                cnt++;
        }
        cnt -=1;
        for(i=0;i<27;i++){
            if(list[i]==max){
                if(cnt--)
                    printf("%c, ", 'a' + i);
                else
                    printf("%c\n", 'a' + i);
            }
        }
        printf("出现的次数: %d\n", max);
    }
    return 0;
}
