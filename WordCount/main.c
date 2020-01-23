/*words count*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char s;
    int i=0;
    
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
