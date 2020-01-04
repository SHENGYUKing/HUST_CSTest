/*×Ö·û´®Á¬½Ó*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100], ans[200];
    char i,j,t;

    while(~scanf("%s %s", s1, s2)){
        for(i=0;s1[i]!='\0';i++){
            ans[i] = s1[i];
        }
        for(j=0;s2[j]!='\0';j++){
            ans[i+j] = s2[j];
        }
        ans[i+j] = '\0';
        printf("%s", ans);
    }

    return 0;
}
