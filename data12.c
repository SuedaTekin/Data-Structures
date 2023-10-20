#include <stdio.h>
#include <stdlib.h>

struct student {
    int std_number;
    int age;
    int final;
    int midterm_exam;
    struct student* next;
};

typedef struct student node;

node* addNode(node* newNode, int new_data) {
    node* p = newNode;
    if (newNode == NULL) {
        newNode = (node*)malloc(sizeof(node));
        newNode->next = NULL;
        newNode->std_number = new_data;
        return newNode;
    } else if (newNode->std_number < new_data) {
        while (p->next != NULL && p->next->std_number < new_data) {
            p = p->next;
        }
        node* temp = (node*)malloc(sizeof(node));
        temp->std_number = new_data;
        temp->next = p->next;
        p->next = temp;
    }
    return newNode;
}

int main() {
    node* head = NULL; // Initialize head as NULL

    // Adding a node
    head = addNode(head, 23);

    printf("our first node %d\n", head->std_number);

    // Free the allocated memory when you're done
    free(head);

    return 0;
}

