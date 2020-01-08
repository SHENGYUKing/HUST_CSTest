/*symmetric matrix*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<1 || n>100){break;}
        else{
            int mat[n][n];
            int i, j;
            // input
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    scanf("%d", &mat[i][j]);
                }
            }
            // charge
            int flg=0;
            for(i=0;i<n;i++){
                if(flg){
                    printf("No!\n");
                    break;
                }
                for(j=i;j<n;j++){
                    if(mat[i][j]!=mat[j][i]){
                        flg=1;
                        break;
                    }
                }
            }
            if(flg==0){
                printf("Yes!\n");
            }
        }
    }
    return 0;
}
