/*最大两个数*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][5];
    while(~scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
                 &mat[0][0], &mat[0][1], &mat[0][2], &mat[0][3], &mat[0][4],
                 &mat[1][0], &mat[1][1], &mat[1][2], &mat[1][3], &mat[1][4],
                 &mat[2][0], &mat[2][1], &mat[2][2], &mat[2][3], &mat[2][4],
                 &mat[3][0], &mat[3][1], &mat[3][2], &mat[3][3], &mat[3][4])){
        int i,j;
        // sort
        for(i=0;i<5;++i){
            for(j=2;j<4;++j){
                if(mat[j][i] > mat[1][i]){
                    if(mat[1][i] > mat[0][i]){
                        mat[0][i] = mat[1][i];
                    }
                    mat[1][i] = mat[j][i];
                }
                else if(mat[j][i] > mat[0][i]){
                    if (mat[1][i] > mat[0][i]){
                        mat[0][i] = mat[1][i];
                    }
                    mat[1][i] = mat[j][i];
                }
            }
        }

        for(i=0;i<2;i++){
            for(j=0;j<5;j++){
                printf("%d", mat[i][j]);
                if(j==4)
                    printf("\n");
                else
                    printf(" ");
            }
        }
    }
    return 0;
}
