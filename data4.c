#include <stdio.h>
#include <stdlib.h>

struct patient {
	int age;
	int urgency;
	char name[20];
	int height;
	struct patient *next;
};

 void main(){
	struct patient *head = (struct patient*)malloc(sizeof(struct patient));
	head -> age=45;
	head ->next =NULL;
	
	
	head->next = (struct patient*)malloc(sizeof(struct patient));
	head->next->age = 33;
	head->next->next =NULL;
	
	printf("first patient age is: %d\n",head->age);
	printf("second patient age is: %d\n",head->next->age);
	
	struct patient *new= (struct patient*)malloc(sizeof(struct patient));
	new->age=56;
	new->next =head;
	head=new;
	
	printf("our new head node's age is: %d",head->age);

}
