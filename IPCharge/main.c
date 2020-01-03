/*IPÅÐÖ·*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;
    while(scanf("%d.%d.%d.%d", &a, &b, &c, &d)!=EOF){
        if(a<0||b<0||c<0||d<0||a>255||b>255||c>255||d>255)
            printf("No!\n");
        else
            printf("Yes!\n");
    }
    return 0;
}
