#include <stdio.h>
#include <stdlib.h>

struct n{
	int x;
	struct n * next;
};
typedef struct n node;

void bastir(node* r) { 
	while(r != NULL) {
		printf("%d ",r->x);
		r=r->next;
	}
}
void ekle(node *r,int x){
	while(r->next!=NULL){
		r=r->next;
	}
	r->next =(node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next = NULL;
}
 int main(){
 	node * root = (node *)malloc(sizeof(node));
 	root ->x = 500;
 	node*iter =root;
 	
 	int i = 0;
 	for(i = 0; i < 5; i++){
 		iter-> next = (node *)malloc(sizeof(node));
 		iter = iter->next;
 		iter->x = i * 10;
 		iter-> next =NULL;
	 }
	 bastir(root);
 
 while (root !=NULL){
 	node* temp = root;
 	root = root->next;
 	free(temp);
 }
 return 0;
}
