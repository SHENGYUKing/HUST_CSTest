/*words count*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
    char s;

    while(~scanf("%c", &s)){
        if(s=='.'){
            printf("%d\n", i);
            break;
        }
        else if(s==' '){
            printf("%d ", i);
            i=0;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
