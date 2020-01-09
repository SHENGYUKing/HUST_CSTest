/*long int sort*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy(char *a, char *b){
    int i;
    for(i=0;i<1000;i++){
        *(b+i) = *(a+i);
    }
}

int cmp(char *a, char *b){
    int i;
    for(i=0;i<1000;i++){
        if(*(a+i) > *(b+i)){
            return 1;
        }
        else if(*(a+i) < *(b+i)){
            return -1;
        }
        else{
            continue;
        }
    }
}

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<1 || n>100){break;}
        else{
            char a[n][1000],temp[1000];
            memset(a,'\0',sizeof(a));
            int i, j;
            for(i=0;i<n;i++){
                scanf("%s", a[i]);
            }
            for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(strlen(a[i]) > strlen(a[j])){
                        copy(a[i], temp);
                        copy(a[j], a[i]);
                        copy(temp, a[j]);
                    }
                    else if(strlen(a[i]) == strlen(a[j])){
                        if(cmp(a[i], a[j])>0){
                            copy(a[i], temp);
                            copy(a[j], a[i]);
                            copy(temp, a[j]);
                        }
                    }
                }
            }
            for(i=0;i<n;i++){
                printf("%s\n", a[i]);
            }
        }
    }
    return 0;
}
