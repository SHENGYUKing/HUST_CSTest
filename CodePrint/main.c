/*Code Print*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main()
{
    char buf[MAX_LINE+1];
    FILE* fp = fopen(".\\test\\test.c", "r");
    int cnt=1;
    int flg=0;
    while(fgets(buf, MAX_LINE, fp)){
        int i, low=0, high=strlen(buf)-1;

        for(i=0;buf[i]!='\0';i++){
            if(buf[i]=='/'){
                if(buf[i+1]=='/')
                    high = i-1;
                else if(buf[i+1]=='*'){
                    high = i-1;
                    flg=1;
                }
            }
            if(buf[i]=='*'){
                if(buf[i+1]=='/'){
                    low = i+2;
                    flg=0;
                }
            }
        }

        printf("%d ", cnt++);
        if(low<=high && flg==0){
            for(i=low;i<=high;i++)
                printf("%c", buf[i]);
            if(buf[high]!='\n')
                printf("\n");
        }
        else{
            printf("\n");
            continue;
        }
    }
    fclose(fp);
    return 0;
}
