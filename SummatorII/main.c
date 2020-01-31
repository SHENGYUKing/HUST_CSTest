/*summator (A+B) special format*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int bigNum(char x[]){
    int i,sum=0,num=0;
    int len=strlen(x);
    for(i=len-1;i>=0;i--)
    {
        if(x[i]=='-')
        {
            sum=-1*sum;
            break;
        }
        if(x[i]==',')
            continue;
        if(x[i]!=',')
        {
            sum+=(x[i]-'0')*pow(10,num);
            num++;
        }
    }
    return sum;
}
int main()
{
    char m[11],n[11];
    while(~scanf("%s %s",m,n))
    {
        printf("%d\n",bigNum(n) + bigNum(m));
    }
}
