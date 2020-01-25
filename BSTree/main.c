/*binary sort tree*/
#include <stdio.h>
#include <stdlib.h>

struct BTNode{
    int val;
    struct BTNode* left;
    struct BTNode* right;
};

struct BTNode* createTree(int v){
    struct BTNode* bt = (struct BTNode*)malloc(sizeof(struct BTNode));
    bt->val = v;
    bt->left = NULL;
    bt->right = NULL;
    return bt;
}

void insert(struct BTNode* root, int v, int* ans, int* k){
    if(root != NULL){
        if(root->val > v){
            if(!root->left){
                struct BTNode* bst = createTree(v);
                root->left = bst;
                ans[*k] = root->val;
                *k = *k+1;
            }
            else
                insert(root->left, v, ans, k);
        }
        else if(root->val < v){
            if(!root->right){
                struct BTNode* bst = createTree(v);
                root->right = bst;
                ans[*k] = root->val;
                *k = *k+1;
            }
            else
                insert(root->right, v, ans, k);
        }
    }
}

void report(int* t, int n){
    int* ans = (int*)malloc(sizeof(int)*n);
    int i, k=1;

    struct BTNode* root = createTree(t[0]);
    ans[0] = -1;
    for(i=1;i<n;i++)
        insert(root, t[i], ans, &k);
    for(i=0;i<n;i++)
        printf("%d\n", ans[i]);
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        int* t = (int*)malloc(sizeof(int)*n);
        int i;
        for(i=0;i<n;i++)
            scanf("%d", &t[i]);
        report(t, n);
        free(t);
    }
    return 0;
}
