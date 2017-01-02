
#include <stdio.h>
 #include<stdlib.h>
 #include<conio.h>
int size;  /* number of nodes in the tree */
		   /* Not actually needed for any of the operations */
 
typedef struct tree_node Tree;
struct tree_node {
	Tree * left, * right;
	int item;
};
 
Tree * srl(Tree ** k1)
{//rotate with left node
       Tree *k2;
       k2=(*k1)->left;
       (*k1)->left=k2->right;
       k2->right=(*k1);
       (*k1)=k2;
}
Tree * srr(Tree ** k1)
{
       Tree *k2;
       k2=(*k1)->right;
       (*k1)->right=k2->left;
       k2->left=(*k1);
       (*k1)=k2;
} 
 
Tree * splay (int i, Tree * t) {
/* Simple top down splay, not requiring i to be in the tree t.  */
/* What it does is described above.							 */
	Tree N, *l, *r, *y;
	if (t == NULL) return t;
	N.left = N.right = NULL;
	l = r = &N;
 
	for (;;) {
		if (i < t->item) {
			if (t->left == NULL) break;
			if (i < t->left->item) {
			srl(&t);
				if (t->left == NULL) break;
			}
			r->left = t;							   /* link right */
			r = t;
			t = t->left;
		} else if (i > t->item) {
			if (t->right == NULL) break;
			if (i > t->right->item) {
			srr(&t);
				if (t->right == NULL) break;
			}
			l->right = t;							  /* link left */
			l = t;
			t = t->right;
		} else {
			break;
		}
	}
	l->right = t->left;								/* assemble */
	r->left = t->right;
	t->left = N.right;
	t->right = N.left;
	return t;
}
 

 
Tree * insert(int i, Tree * t) {
/* Insert i into the tree t, unless it's already there.	*/
/* Return a pointer to the resulting tree.				 */
	Tree *new1;
 
	new1 = (Tree *) malloc (sizeof (Tree));
	if (new1 == NULL) {
		printf("Ran out of space\n");
		exit(1);
	}
	new1->item = i;
	if (t == NULL) {
		new1->left = new1->right = NULL;
		size = 1;
		return new1;
	}
	t = splay(i,t);
	if (i < t->item) {
		new1->left = t->left;
		new1->right = t;
		t->left = NULL;
		size ++;
		return new1;
	} else if (i > t->item) {
		new1->right = t->right;
		new1->left = t;
		t->right = NULL;
		size++;
		return new1;
	} else { /* We get here if it's already in the tree */
			 /* Don't add it again					  */
		free(new1);
		return t;
	}
}
 
Tree *delete1(int i, Tree * t) {
/* Deletes i from the tree if it's there.			   */
/* Return a pointer to the resulting tree.			  */
	Tree *x;
	if (t==NULL) return NULL;
	t = splay(i,t);
	if (i == t->item) {			   /* found it */
		if (t->left == NULL) {
			x = t->right;
		} else {
			x = splay(i, t->left);
			x->right = t->right;
		}
		size--;
		free(t);
		return x;
	}
	return t;						 /* It wasn't there */
}

void printsplay(Tree *root)
{
     if(root == NULL)
     return;
     else
     {
         printf("%d",root->item);
         printsplay(root->left);
         printsplay(root->right);
         
         }
     } 
 
int main() {
/* A sample use of these functions.  Start with the empty tree,		 */
/* insert some stuff into it, and then delete it						*/
	Tree * root;
	int i;
	root = NULL;			  /* the empty tree */
	size = 0;
	for (i = 0; i < 20; i++) {
        
	root = insert(i,root);
	printsplay(root);
	printf("\n");
	}


	getch();
}
