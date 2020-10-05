// C program for Morris Preorder traversal
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a;
    struct node *lc, *rc;
};
struct node* create(int a)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->a = a;
    temp->lc = temp->rc = NULL;
    return temp;
}
void morrispre(struct node* root)
{
    while (root)
    {
        if (root->lc == NULL)
        {
            printf( "%d ", root->a );
            root = root->rc;
        }
        else
        {
            struct node* current = root->lc;
            while (current->rc && current->rc != root)
                current = current->rc;
            if (current->rc == root)
            {
                current->rc = NULL;
                root = root->rc;
            }
            else
            {
                printf("%d ", root->a);
                current->rc = root;
                root = root->lc;
            }
        }
    }
}
/*void preorder(struct node* root)
{
    if (root)
    {
        printf( "%d ", root->a);
        preorder(root->lc);
        preorder(root->rc);
    }
}*/
int main()
{
    struct node* root = NULL;

    root = create(30);
    root->lc = create(20);
    root->rc = create(40);

    root->lc->lc = create(10);
    root->lc->rc = create(25);

    root->rc->lc = create(35);
    root->rc->rc = create(50);

    root->lc->lc->lc = create(5);
    root->lc->lc->rc = create(15);

    root->lc->rc->lc = create(23);
    root->lc->rc->rc = create(29);

    morrispre(root);

    printf("\n");
   // preorder(root);

    return 0;
}
