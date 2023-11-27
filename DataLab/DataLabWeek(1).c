#include <stdio.h>
#include <stdlib.h>

// Tek ba?ly dü?üm yapysy
struct Node {
    int data;
    struct Node* next;
};

struct node* head=NULL;

// Yeni bir dü?üm olu?turur ve veriyi ekler
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Tek sayylary listenin ba?yna, çift sayylary ise sonuna ekler
void addlist(int data) {
    struct Node* new_node = newNode(data);

    if (head == NULL) {
        head = new_node;
    } else if (data % 2 == 1) {
        new_node->next = head;
        head = new_node;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// Liste içeri?ini yazdyryr
void printlist() {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int num;

    printf("enter a number (exit: -1): ");
    scanf("%d", &num);

    while (sayi != -1) {
        addlist(num);

        printf("enter a number (exit: -1): ");
        scanf("%d", &num);
    }

    printf("result:  ");
    printlist();

    return 0;
}
