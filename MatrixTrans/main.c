/*¾ØÕó×ªÖÃ*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i,j,temp;
    while(~scanf("%d",&N)){
        if(N>=1&&N<=100){
            int mat[N][N];
            for(i=0;i<N;i++){
                for(j=0;j<N;j++){
                    scanf("%d",&mat[i][j]);
                }
            }
            for(i=0;i<N;i++){
                for(j=i;j<N;j++){
                    if(i!=j){
                        temp = mat[i][j];
                        mat[i][j] = mat[j][i];
                        mat[j][i] = temp;
                    }
                }
            }
            for(i=0;i<N;i++){
                for(j=0;j<N;j++){
                    if(j==N-1)
                        printf("%d\n", mat[i][j]);
                    else
                        printf("%d ", mat[i][j]);
                }
            }
        }
        else
            break;
    }
    return 0;
}
