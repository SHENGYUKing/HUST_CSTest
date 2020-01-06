/*Á´±í±éÀú*/
#include <stdio.h>
#include <stdlib.h>

typedef struct LinkList{
    int data;
    struct LinkList *next;
}LNode;

void pop_sort(int* d, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(d[j] > d[j+1]){
                int t = d[j];
                d[j] = d[j+1];
                d[j+1] = t;
            }
        }
    }
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        if(n<1 || n>1000){break;}
        else{
            int i, d[n];
            for(i=0;i<n;i++){
                scanf("%d", &d[i]);
            }
            pop_sort(d, n);

            // create LinkList
            LNode *L, *tmp;
            L = (LNode *)malloc(sizeof(LNode));
            LNode *p = L;
            for(i=0;i<n;i++){
                tmp = (LNode *)malloc(sizeof(LNode));
                tmp->data = d[i];
                p->next = tmp;
                p = p->next;
            }
            p->next = NULL;
            // traversal
            LNode *q;
            q = L->next;
            while(q->next!=NULL){
                printf("%d ", q->data);
                q = q->next;
            }
            printf("%d\n", q->data);
        }
    }
    return 0;
}
