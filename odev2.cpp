#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;           
    struct Node* next; 
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addNodeAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  

    addNodeAtBeginning(&head, 10);
    addNodeAtBeginning(&head, 20);
    addNodeAtBeginning(&head, 30);

    printf("Liste: ");
    printList(head);

    return 0;
}


