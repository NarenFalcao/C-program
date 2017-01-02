#include<stdio.h>
#include<iostream>
using namespace std;
struct node {
	int data;
	node *left;
	node *right;
};node *root=NULL;
struct node* newNode(int data)
{
	struct node* temp=new (struct node);
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void print_current(int path[],int pathLength)
{
	int i;
	printf("\nPATH:\n-----\n");
	for(i=0;i<pathLength;i++)
		printf("%d-->",path[i]);
}
void print_path(struct node* node,int path[],int pathLength)
{
	if(node!=NULL)
	{
		path[pathLength]=node->data;
		pathLength=pathLength+1;		
		if(node->left==NULL && node->right==NULL)
		{
			print_current(path,pathLength);
		}
		else 
		{
			print_path(node->left,path,pathLength);
			print_path(node->right,path,pathLength);
		}
	}
	else
		return;
}
void printPaths(struct node* node)
{
	int path[1000];
	int pathLength=0;
	print_path(node,path,pathLength);
}
struct node* insert(struct node* node,int data)
{
	//struct node* node;
	if(node==NULL)
	{
		return newNode(data);
	}
	else 
	{
		if(data<node->data)
		{
			node->left=insert(node->left,data);		
		}
		else
			node->right=insert(node->right,data);		
		return node;
	}	
}
int hasPathSum(struct node* node,int sum)
{
	if(node==NULL)
		return (sum==0);
	else return hasPathSum(node->left,sum-node->data) || hasPathSum(node->right,sum-node->data);
}
int lookup(struct node* node,int data)
{
	if(node!=NULL)
	{
		if(node->data==data)
			return 1;
		else if(data<node->data)
			return lookup(node->left,data);
		else
			return lookup(node->right,data);
	}	
	else
		return 0;
}
void print_tree(struct node* node)
{
	if(node!=NULL)
	{
		print_tree(node->left);
		printf("%d   ",node->data);
		
		print_tree(node->right);
	}
}
int size_tree(struct node* node)   // the total no of nodes in a tree
{
	if(node==NULL)
	{
		return 0;
	}
	else
	{
		return 1+size_tree(node->left)+size_tree(node->right);
	}
}
int max_depth(struct node* node)  // print the length of longest path
{
	if(node==NULL)
		return 0;
	int ldepth,rdepth;
	ldepth=max_depth(node->left);
	rdepth=max_depth(node->right);
	if(ldepth>rdepth)	
		return ldepth+1;
	else	
		return rdepth+1;	
}
int max_value(struct node* node)
{	
	if(node!=NULL)
	{
		while(node->right!=NULL)
		{
			node=node->right;
		}
		return node->data;
	}

		
}
void mirror(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	else
	{
		mirror(node->left);
		mirror(node->right);
		struct node* temp;
		temp=node->left;
		node->left=node->right;
		node->right=temp;		
	}
}
int min_value(struct node* node)
{	
	if(node!=NULL)
	{
		while(node->left!=NULL)
		{
			node=node->left;
		}
		return node->data;
	}

		
}
node *toDLL(node *root)
{
     if(root == NULL)
     return root; 
     else
     {
         if(root->left!=NULL)
         {
                             node *left = toDLL(root->left);
                             
                             
                             for(;left->right!=NULL;left = left->right);
                             
                             //assign root to after left
                             left->right = root;
                             root->left = left;
                             }
         if(root->right!=NULL)
         {
                              node *right = toDLL(root->right);
                              for(;right = right->left;right=right->left);
                              
                              //assign roots next to be right
                              
                              root->right = right;
                              right->left = root;
                              
                              
                              
                              
                              }
         
         
         
         
         
         
         
         }
     
     return (root);
     
     }

node *BStoDLL(node *root)
{
     if(root == NULL)
     return root;
     else
     {
         root = toDLL(root);
         while(root->left!=NULL)
         root = root->left;
         
         }
return (root);     
     }



int main()
{
	int choice=0,n;
	while(choice!=11)
	{
		printf("\n1.insert\n2.print tree\n3.lookup\n4.size of tree\n5.Max depth\n6.Min value\n7.Max value\n8.Check if a path has a pathSum?\n9.Print All paths\n10.mirroring a tree \n 99. BS TO DLL 11.exit\nEnter ur choice:  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				scanf("%d",&n);
				root=insert(root,n);
				break;
			case 2:
				print_tree(root);
				break;
			case 3:
				scanf("%d",&n);
				if(lookup(root,n))				
					printf("\nThe value u entered is present in the tree");
				else
					printf("\nThe value u entered is not present in the tree");
				break;
			case 4:
				printf("\nSize of tree = %d ",size_tree(root));
				break;
			case 5:
				printf("\nMax depth is %d",max_depth(root));
				break;		
			case 6:
				printf("\nMin value is %d",min_value(root));
				break;
			case 7:
				printf("\nMax value is %d",max_value(root));
				break;
			case 8:
				scanf("%d",&n);
				if(hasPathSum(root,n))
					printf("\nThere is a path with pathsum of %d");
				else
					printf("\nThere is no path with pathsum of %d");
				break;
			case 9:
				printPaths(root);
				break;
			case 10:
				mirror(root);
				break;
			case 11:
				printf("\nBye !!!!");
				break;
		
				printf("\nwrong choice:");
		}
	}
}
