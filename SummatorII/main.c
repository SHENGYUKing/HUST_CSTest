/*summator (A+B) special format*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plus(char* a, char* b){
    int sum1=0, sum2=0;
    int i;
    for(i=0;i<strlen(a);i++){
        if(a[i]!=','){
            sum1 *= 10;
            sum1 += a[i] - '0';
        }
    }
    for(i=0;i<strlen(b);i++){
        if(b[i]!=','){
            sum2 *= 10;
            sum2 += b[i] - '0';
        }
    }
    return sum1 + sum2;
}

int sub(char* a, char* b){
    int sum1=0, sum2=0;
    int i;
    for(i=0;i<strlen(a);i++){
        if(a[i]!=','){
            sum1 *= 10;
            sum1 += a[i] - '0';
        }
    }
    for(i=0;i<strlen(b);i++){
        if(b[i]!=','){
            sum2 *= 10;
            sum2 += b[i] - '0';
        }
    }
    return sum1 - sum2;
}

int main()
{
    char a[14], b[14];
    while(~scanf("%s %s", a, b)){
        int sign_a=0,sign_b=0;
        char *ap=a, *bp=b;
        if(*ap=='-'){sign_a = 1;ap++;}
        if(*bp=='-'){sign_b = 1;bp++;}
        switch(sign_a + sign_b){
            // a>0, b>0
            case 0:
                printf("%d\n", plus(ap, bp));
                break;

            case 1:
                // a<0, b>0
                if(sign_a){
                    if(strlen(ap)>strlen(bp) || (strlen(ap)==strlen(bp)&&strcmp(ap, bp)>0)){
                        printf("-%d\n", sub(ap, bp));
                    }
                    else{
                        printf("%d\n", sub(bp, ap));
                    }
                }
                // a>0, b<0
                else{
                    if(strlen(ap)>strlen(bp) || (strlen(ap)==strlen(bp)&&strcmp(ap,bp)>0)){
                        printf("%d\n", sub(ap, bp));
                    }
                    else{
                        printf("-%d\n", sub(bp, ap));
                    }
                }
                break;
            // a<0, b<0
            case 2:
                printf("-%d\n", plus(ap,bp));
                break;
        }
    }
    return 0;
}
