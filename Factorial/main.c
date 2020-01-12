/*factorial*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d", &n)){
        int i;
        int sum1=0, sum2=0, temp=1;
        for(i=1;i<n+1;i++){
            temp = temp * i;
            if(i%2) sum1 += temp;
            else sum2 += temp;
        }
        printf("%d %d\n", sum1, sum2);
    }
    return 0;
}
