/*up sort*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d", &n)){
        int d[n];
        int i,j,t;
        for(i=0;i<n;i++)
            scanf("%d", &d[i]);
        // up pop sort
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(d[j]>d[j+1]){
                    t = d[j];
                    d[j] = d[j+1];
                    d[j+1] = t;
                }
            }
        }

        for(i=0;i<n;i++)
            printf("%d ", d[i]);
    }
    return 0;
}
