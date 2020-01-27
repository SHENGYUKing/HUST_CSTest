/*special sort*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d", &n)){
        int a[n];
        int i,j;
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }

        // pop sort
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

        printf("%d\n", a[n-1]);
        if(n==1 || a[0]==a[n-1]){
            printf("-1");
        }
        else{
            for(i=0;i<n-1;i++){
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}
