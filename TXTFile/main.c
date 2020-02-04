/*.txt file operation*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1024

char str[MAX_SIZE+1];

void fileOperation1(){
    FILE *fp = fopen("D:\\abc0.txt", "at+");
    fputs(str, fp);
    fclose(fp);
}

void fileOperation2(){
    char *s = (char*)malloc(sizeof(char)*(MAX_SIZE+1));
    FILE *fp = fopen("D:\\abc0.txt", "r");
    FILE *fp_new = fopen("D:\\abc1.txt", "at+");
    fgets(s, MAX_SIZE, fp);

    int low=0, high=0, len=strlen(s);
    // head space
    while(s[high]==' ' && high<len) high++;
    // in space
    while(high<len){
        if(s[high]==' '){
            s[low++] = ' ';
            while(s[high]==' ' && high<len) high++;
        }
        else{
            while(s[high]!=' ' && high<len)
                s[low++] = s[high++];
        }
    }
    // end space
    if(s[low-1]==' ')
        s[low-1] = '\0';
    else
        s[low] = '\0';

    printf("%s\n", s);
    fputs(s, fp_new);
    fclose(fp);
    fclose(fp_new);
}

void fileOperation3(){
    char *s = (char*)malloc(sizeof(char)*(MAX_SIZE+1));
    FILE *fp = fopen("D:\\abc1.txt", "r");
    fgets(s, MAX_SIZE, fp);
    int i;
    int cnum=0, wnum=0, snum=0;
    for(i=1;s[i-1]!='\0';i++){
        cnum++;
        if(s[i-1]=='.'){
            snum++;
            wnum++;
        }
        else if(s[i]==' '){
            if(s[i-1]!='.'&&s[i+1]!='.')
                wnum++;
        }
        else
            continue;
    }
    printf("%d %d %d\n", cnum, wnum, snum);
    fclose(fp);
}

int main()
{
    gets(str);
    fileOperation1();
    fileOperation2();
    fileOperation3();
    return 0;
}
