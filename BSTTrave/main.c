/*binary sorting tree traversal*/
#include <stdio.h>
#include <stdlib.h>

typedef struct BTNode{
    int val;
    struct BTNode *left;
    struct BTNode *right;
}BTNode;

BTNode* createBT(int v){
    BTNode* bt = (BTNode*)malloc(sizeof(BTNode));
    bt->val = v;
    bt->left = NULL;
    bt->right = NULL;
    return bt;
}

// create BST by insert
BTNode* insert(BTNode* root, int v){
    if(root==NULL){
        root = createBT(v);
        return root;
    }
    else if(root->val > v){
        root->left = insert(root->left, v);
    }
    else if(root->val < v){
        root->right = insert(root->right, v);
    }
    return root;
}

void preTravePrint(BTNode *T){
    printf("%d ", T->val);
    if(T->left!=NULL)
        preTravePrint(T->left);
    if(T->right!=NULL)
        preTravePrint(T->right);
}

void inTravePrint(BTNode *T){
    if(T->left!=NULL)
        inTravePrint(T->left);
    printf("%d ", T->val);
    if(T->right!=NULL)
        inTravePrint(T->right);
}

void postTravePrint(BTNode *T){
    if(T->left!=NULL)
        postTravePrint(T->left);
    if(T->right!=NULL)
        postTravePrint(T->right);
    printf("%d ", T->val);
}

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<1 || n>100){break;}
        else{
            int i;
            BTNode *bst=NULL;
            for(i=0;i<n;i++){
                int x;
                scanf("%d", &x);
                bst = insert(bst, x);
            }
            preTravePrint(bst);
            printf("\n");
            inTravePrint(bst);
            printf("\n");
            postTravePrint(bst);
            printf("\n");
        }
    }
    return 0;
}
