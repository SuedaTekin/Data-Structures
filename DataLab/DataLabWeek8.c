#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
}node;

typedef struct node *BTREE;
BTREE insert (BTREE root,int x){ 
   if (root==NULL)
   BTREE new= malloc(sizeof(BTREE));
   new->left = new-> right =NULL;
   new->data=x;
   return new; 
}
if(root->data<x){
	root->right = insert(root->right,x);
	return root;
}
else if(root->data>x){
	root->left = insert(root->left,x);
	return root;
}

BTREE delete node(BTREE node,int x)
      BTREE p,q;
      if(root==NULL)return NULL;
      if(root->data== x){
      	if(root->left == root->right)} free(root); return NULL;}
      	else {
      		if(root->left == NULL)}p=root->right;
      		        free(root);return p; }
      	else if (root->right==NULL){p=root->left;free(root);return p;}
      	
        else{
        	p=q=root->right;
        	while(p->left != NULL)p=p->left;
        	p->left =root->left;
        	free(root);
        	return(q);
		}
		if(root->data(x){root->right = delete(root->right,x);})
		else{root->left=delete(root->left,x);}
		return root;
