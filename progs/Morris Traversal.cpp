#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
       int data;
       struct node *left;
       struct node *right;
       struct node *parent;
       
       };
       struct node *findmin(struct node *tmp);
struct node *newnode(int a)
{
       struct node *n = (struct node*)malloc(sizeof(struct node));
       n->data = a;
       n->left = n->right = NULL;
       n->parent = NULL;
       return n;
       
       }
       
struct node *inordersuccessor(struct node *root,struct node *temp)
{
       struct node *t = temp;
        struct node *p = temp->parent;
       if(t->right != NULL)
       {
                  return findmin(t->right);
                   
                   }
      
       else
       {
           while(p->right == temp && p!=NULL)
           {
                          temp = p;
                          p=p->parent;
                          
                          }
           return p;
           
           
           }
       
       
       
       }
struct node *findmin(struct node *tmp)
{
       while(tmp->left!=NULL)
       {
                             tmp = tmp->left;
                             }
                             return tmp;
       
       
       
       }
       
struct node *insert_node(struct node *root,int a)
{
       if(root ==  NULL)
       return (newnode(a));
       else
       {
       struct node *temp;
       
       if(a<=root->data)
       {
                      temp =  insert_node(root->left,a);
                       root->left = temp;
                       temp->parent = root;
                       
                       
                       }
       if(a>=root->data)
       {
                        temp =insert_node(root->right,a);
                        root->right = temp;
                        temp->parent = root;
                        
                        }
       return root;
       }
       }
void inorder(struct node *node)
{
       if(node!=NULL)
       
       {
                        inorder(node->left);
                        printf("%d\t",node->data);
                        inorder(node->right);
                        
                        }
       
       }
struct node *search1(struct node *root,int num)

{
      // printf("in func");
       
if(root->data == num)
return root;
if(num<root->data)
{
              //    printf("going left\n");
                   search1(root->left,num);
                   
                   }       
if(num>root->data)
{
                 // printf("going right\n");
                  search1(root->right,num);
                  }
      
       }

int main()
{
    struct node *root = NULL;
    struct node *temp,*searchnode,*ans;
    int num;
  root =   insert_node(root,20);
  root =    insert_node(root,8);
    root =  insert_node(root,22);
    root =  insert_node(root,4);
    root =  insert_node(root,12);
     root = insert_node(root,10);
     root =  insert_node(root,14);
  //  printf("%d",root->data);
    inorder(root);
    temp = root->left->right->right;
  
     //printf("%d",temp->data);
  // printf("\n find the inorder successor of");
   //scanf("%d",&num);
    //searchnode = search1(root,num);
  //  inorder(searchnode);
 //printf("%d",searchnode->right);
 ans = inordersuccessor(root,temp);
    printf("\n inorder successor of %d is %d",temp->data,ans->data);
 getch();
     
    }
