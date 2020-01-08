/*max number in matrix*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    while(~scanf("%d %d", &m, &n)){
        if(m<1 || n>100){
            break;
        }
        else{
            int mat[m][n];
            int i, j;
            // input
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    scanf("%d", &mat[i][j]);
                }
            }
            // max and sum
            int max[m][2], sum[m];
            for(i=0;i<m;i++){
                sum[i] = 0;
                max[i][0] = mat[i][0];
                max[i][1] = 0;
                for(j=0;j<n;j++){
                    sum[i] += mat[i][j];
                    if(max[i][0] < mat[i][j]){
                        max[i][0] = mat[i][j];
                        max[i][1] = j;
                    }
                }
            }
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    if(j == max[i][1]){
                        mat[i][j] = sum[i];
                    }
                    printf("%d ", mat[i][j]);
                }
                if(i<m-1) printf("\n");
            }
        }
    }
    return 0;
}
