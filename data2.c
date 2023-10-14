#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int x;
	struct Node* next;
}node;

int main(){
	node * root;
	root=(node *)malloc(sizeof(node));
	root->x = 10;
	root->next = (node *)malloc(sizeof(node));
	root->next->x = 20;
	root->next->next = (node *)malloc(sizeof(node));
	root->next->next->x = 30;
	
	node* iter = root;
	printf("%d\n",iter->x);
	iter = iter->next;
	printf("%d\n",iter->x);
	};
