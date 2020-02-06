/*Encrypted Output*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 80

void encryptedOutput(char* s){
    int i;
    for(i=0;s[i]!='\0';i++){
        switch(s[i]){
            case 'y':
                s[i] = 'a';
                break;
            case 'Y':
                s[i] = 'A';
                break;
            case 'z':
                s[i] = 'b';
                break;
            case 'Z':
                s[i] = 'B';
                break;
            default:
                s[i] += 2;
                break;
        }
    }
    printf("%s\n", s);
}

void parityCheck(char* s){
    int bi[8];
    int i, j, sum;
    for(i=0;s[i]!='\0';i++){
        printf("%c ", s[i]);

        sum = 0;
        for(j=7;j>0;j--){
            bi[j] = s[i]%2;
            s[i] = s[i]/2;
        }
        for(j=1;j<8;j++)
            sum += bi[j];
        if(sum%2)
            bi[0] = 0;
        else
            bi[0] = 1;

        sum = 0;
        for(j=0;j<8;j++){
            printf("%d", bi[j]);
            sum += bi[j] * pow(2, 7-j);
        }
        printf(" %d\n", sum);
    }
}

int main()
{
    char ch[MAX_SIZE+1];
    while(~scanf("%s", ch)){
        encryptedOutput(ch);
        parityCheck(ch);
    }
    return 0;
}
