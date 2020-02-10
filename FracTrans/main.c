/*Fraction Transform*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, D;
    while(~scanf("%d/%d", &N, &D)){
        int con[1024], rem[1024];
        int i, pos;
        int integer = N / D;
        int fraction = N % D;

        for(i=0;i<1024;i++){
            con[i] = 0;
            rem[i] = 0;
        }

        printf("%d/%d=", N, D);
        if(fraction==0){
            printf("%d\n", integer);
            continue;
        }
        else{
            if(integer==0)
                printf(".");
            else
                printf("%d.", integer);
        }

        int cnt = 0;
        int flg = 0;
        while(1){
            fraction *=10;
            while(fraction<D){
                fraction *= 10;
                cnt++;
            }
            con[cnt] = fraction / D;
            rem[cnt] = fraction % D;

            if(rem[cnt]==0){
                flg = 1;
                break;
            }
            for(i=0;i<cnt;i++){
                if(con[i]==con[cnt] && rem[i]==rem[cnt]){
                    flg = 2;
                    pos = i;
                    break;
                }
            }
            if(flg==2) break;

            fraction = rem[cnt];
            cnt++;
        }

        // infinite decimal
        if(flg==2){
            for(i=0;i<cnt;i++){
                if(i==pos)
                    printf("(");
                printf("%d", con[i]);
            }
            printf(")");
        }
        // finite decimal
        else if(flg==1){
            for(i=0;i<=cnt;i++)
                printf("%d", con[i]);
        }
        printf("\n");
    }
    return 0;
}
