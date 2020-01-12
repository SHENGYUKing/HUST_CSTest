/*octonary number system*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<0 || n>100000){break;}
        else{
            printf("%o\n", n);
        }
    }
    return 0;
}
