/*find the same char's location*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    while(~scanf("%s", s)){
        int flg[100];
        int n=strlen(s);
        int i, j;
        // initial flag
        for(i=0;i<n;i++){
            flg[i] = 1;
        }
        // charge one by one
        for(i=0;i<n;i++){
            // flg=1 means uncharged, flg=0 means charged
            if(flg[i]){
                    int cnt=1;
                for(j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        cnt++;
                    }
                }
                if(cnt>1){
                    printf("%c:%d", s[i], i);
                    for(j=i+1;j<n;j++){
                        if(s[j]==s[i]){
                            printf(",%c:%d", s[i], j);
                            flg[j] = 0;
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
