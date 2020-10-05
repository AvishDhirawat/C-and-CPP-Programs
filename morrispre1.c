#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* lc;
    struct node* rc;
};
void inorder(struct node* root)
{
    struct node *current, *pre;

    if (root == NULL)
        return;

    current = root;
    while (current != NULL) {

        if (current->lc == NULL) {
            printf("%d ", current->data);
            current = current->rc;
        }
        else {
            pre = current->lc;
            while (pre->rc != NULL && pre->rc != current)
                pre = pre->rc;
            if (pre->rc == NULL) {
                pre->rc = current;
                current = current->lc;
                printf("%d",current->data);
            }
            else {
                pre->rc = NULL;
                current = current->rc;
            }
        }
    }
}
struct node* create(int data)
{
    struct node* temp = (struct node*)malloc (sizeof(struct node));
    temp->data = data;
    temp->lc = NULL;
    temp->rc = NULL;
    return (temp);
}
int main()
{
    struct node* root;
    root = create(20);
    root->lc=create(15);
    root->rc=create(35);
    root->rc->rc=create(40);
    root->lc->lc=create(13);
    root->lc->rc=create(18);
    printf("Preorder : ");
    inorder(root);
    return 0;
}
