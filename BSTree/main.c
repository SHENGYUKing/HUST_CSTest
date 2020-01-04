/*二叉排序树*/
#include <stdio.h>
#include <stdlib.h>

// 建立二叉树结构
struct BTNode{
    int val;
    struct BTNode* left;
    struct BTNode* right;
};

// 自定义函数,创建二叉树
struct BTNode* createTree(int v){
    struct BTNode* bst = (struct BTNode*)malloc(sizeof(struct BTNode));
    bst->val = v;
    bst->left = NULL;
    bst->right = NULL;
    return bst;
}

// 自定义函数，插入法建立二叉排序树
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

// 自定义函数，按题目要求输出
void report(int* t, int n){
    int* ans = (int*)malloc(sizeof(int)*n);
    int i, k=1;

    struct BTNode* root = createTree(t[0]);
    ans[0] = -1;
    for(i=1;i<n;++i)
        insert(root, t[i], ans, &k);
    for(i=0;i<n;++i)
        printf("%d\n", ans[i]);
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        int* t = (int*)malloc(sizeof(int)*n);
        int i;
        for(i=0;i<n;++i)
            scanf("%d", &t[i]);
        report(t, n);
    }
    return 0;
}
