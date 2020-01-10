/*up stairs*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<1 || n>=90){break;}
        else{
            int f;
            if(n<=2){
                f = n;
            }
            else{
                int a=1, b=2, temp=0;
                int i;
                // in fact it's a Fibonacci sequence
                for(i=3;i<n+1;i++){
                    temp = a + b;
                    a = b;
                    b = temp;
                }
                f = temp;
            }
            printf("%d", f);
        }
    }
    return 0;
}
