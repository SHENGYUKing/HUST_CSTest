/*binary tree traversal*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char pre[26],in[26];

int post(int root, int start, int end){
    if(start > end){
        return -1;
    }
    int i=start;
    while(i<end && in[i]!=pre[root]){
        i++;
    }
    post(root+1, start, i-1);
    post(root+1+i-start, i+1, end);
    if(pre[root]>='A'&&pre[root]<='Z'){
        printf("%c", pre[root]);
    }
    return 0;
}

int main()
{
    while(~scanf("%s\n%s", pre, in)){
        post(0,0,strlen(pre));
    }
    return 0;
}
