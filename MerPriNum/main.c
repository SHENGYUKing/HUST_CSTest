/*Mersenne Prime Number*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Lucas¨CLehmer primality test
// M(p)>3, L(p-2)=0, when L(0)=4, L(n+1)=(L(n)^2-2)modM(p)
// MP(8th) = 2^31 - 1

int prime(int n){
    int i;
    long k;
    k = sqrt(n) + 1;
    for(i=2;i<=k;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    long x;
    while(~scanf("%ld", &x)){
        long mp=3;
        int cnt=2;
        if(x<3){
            printf("None!\n");
        }
        else if(x==3){
            printf("M(2)=3\n");
        }
        else{
            while(x >= mp){
                if(prime(mp))
                    printf("M(%d)=%ld\n", cnt, mp);
                if(mp == pow(2,31)-1)
                    break;
                else{
                    cnt++;
                    mp = pow(2,cnt)-1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
