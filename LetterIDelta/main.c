/*Letter Inverted Delta*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    while(~scanf("%c", &x)){
        int i, j;
        int n;
        if(x>='a' && x<='z')
            n = x - 'a';
        else if(x>='A' && x<='Z')
            n = x - 'A';
        else
            break;

        int t = 2 * n + 1;

        for(i=0;i<=n;i++){
            for(j=0;j<i;j++)
                printf(" ");
            for(j=0;j<t-i*2;j++){
                if(j<=(t-i*2)/2)
                    printf("%c", x-(t-i*2)/2+j-i);
                else
                    printf("%c", x+(t-i*2)/2-j-i);
            }
            printf("\n");
        }
    }
    return 0;
}
