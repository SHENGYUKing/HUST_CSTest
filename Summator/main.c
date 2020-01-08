/*summator (a+b)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int change(char ch[],int in[]){
    int len=strlen(ch),i;

    for(i=0;i<len;i++)
        in[i] = ch[len-i-1] - '0';
    return len;
}

int main()
{
    char ch_a[1001], ch_b[1001];

    while(~scanf("%s %s", ch_a, ch_b)){
        int a[1001], b[1001], s[1002];
        int na = change(ch_a, a);
        int nb = change(ch_b, b);
        int n = na > nb? na : nb;
        int j;
        int flag = 0;

        for(j=0;j<n;j++){
            s[j] = (a[j]+b[j]+flag)%10;
            flag = (a[j]+b[j]+flag)/10;
        }
        if(flag){
            s[n] = flag;
            n++;
        }
        for(j=n-1;j>=0;j--){
            printf("%d", s[j]);
        }
    }
    return 0;
}
