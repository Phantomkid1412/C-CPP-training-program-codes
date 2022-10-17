// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *left;
//     struct node* right;
// };
// void inordertraversal(struct node* root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inordertraversal(root->left);
//     printf("%d ",root->data);
//     inordertraversal(root->right);
// }
// void preordertraversal(struct node* root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     printf("%d ",root->data);
//     preordertraversal(root->left);
//     preordertraversal(root->right);
// }
// void postordertraversal(struct node* root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     postordertraversal(root->left);
//     postordertraversal(root->right);
//     printf("%d ",root->data);

// }
// struct node* creatnode(val)
// {
//     struct node* newnode=malloc(sizeof(struct node));
//     newnode->data=val;
//     newnode->left=NULL;
//     newnode->right=NULL;
//     return newnode;
// }
// struct node* insertleft(struct node* root, int val) {
//   root->left = creatnode(val);
//   return root->left;
// }
// struct node* insertright(struct node* root, int val) {
//   root->right = creatnode(val);
//   return root->right;
// }

// int main()
// {
//     struct node* root=creatnode(1);
//     insertleft(root,2);
//     insertright(root,3);
//     insertleft(root->left,4);
//     printf("Inorder traversal\n");
//     inordertraversal(root);
//     printf("\nPreorder traversal\n");
//     preordertraversal(root);
//     printf("\nPostorder traversal\n");
//     postordertraversal(root);
//     return 0;
// }
 #include <stdio.h>
 #include <stdlib.h>

 struct node
 {
     int key;
     struct node *left;
     struct node *right;
 };

 struct node* newNode(int item)
 {
     struct node* temp = (struct node*)malloc(sizeof(struct node));
     temp->key = item;
     temp->right = temp->left = NULL;
     return temp; 
 }

 struct node* insert(struct node* node, int key)
 {
    if(node == NULL)
    {
         return newNode(key);
    }
    if(key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else
    {
        node->right = insert(node->right, key);
    }
    return node;
 }

void inorder(struct node* root)
{   
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    while(current->left != NULL)
    {
        current = current->left;
    }
    return current;
}
 struct node* deleteNode(struct node* root, int key)
 {
     if (root == NULL)
     {
         return root;
     }
     if(key < root->key)
     {
         root->left = deleteNode(root->left, key);
     }
     else if(key > root->key)
     {
         root->right = deleteNode(root->right, key);
     }
     else
     {
         if (root->left == NULL)
         {
             struct node* temp = root->right;
             free(root);
             return temp;
         }
         else if(root->right == NULL)
         {
             struct node* temp = root->left;
             free(root);
             return temp;
         }
         struct node* temp = minValueNode(root->right);
         root->key = temp->key;
         root->right = deleteNode(root->right, temp->key);
     }
     return root;
 }

 int main()
 {
     struct node* root = NULL;
     root = insert(root, 1);
     insert(root, 2);
     insert(root, 3);
     insert(root, 4);
     insert(root, 5);
     insert(root, 6);
     insert(root, 7);

     printf("Inorder Traversal of BST: ");
     inorder(root);
     root = deleteNode(root, 5);
     printf("\nInorder Traversal of modified BST: ");
     inorder(root);
     printf("\n");
     return 0;
 }