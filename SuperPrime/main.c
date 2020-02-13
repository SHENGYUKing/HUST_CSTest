/*Super Prime*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 1024

int isPrime(int x){
    int i, flg=0;
    if(x==1) return 0;
    else if(x==2) return 1;
    else{
        int t = (int)sqrt(x);
        for(i=2;i<=t;i++){
            if(x%i==0){
                flg = 1;
                break;
            }
            else
                flg = 0;

        }
        if(flg)
            return 0;
        else
            return 1;
    }
}

int main()
{
    int i, cnt=0;
    int* p = (int*)malloc(sizeof(int)*MAX_SIZE);
    for(i=1000;i<10000;i++){
        if(i/1000==1)
            continue;
        else if(i%2==0)
            continue;
        else if(i%5==0)
            continue;
        else if(isPrime(i/1000)+isPrime(i/100)+isPrime(i/10)+isPrime(i)==4)
            p[cnt++] = i;
    }
    for(i=0;i<cnt;i++){
        printf("%d", p[i]);
        if((i+1)%6==0)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
