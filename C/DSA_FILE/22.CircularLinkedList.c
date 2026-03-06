#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void INSERTB(int value) {
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if(head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

void INSERTE(int value) {
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if(head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

void SHOW() {
    struct node *temp;

    if(head == NULL) {
        printf("List is Empty.\n");
        return;
    }

    temp = head;

    do {
        printf("%d -> ",temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

int main() {
    INSERTB(10);
    INSERTB(5);
    INSERTE(20);
    INSERTE(30);

    printf("Circular Linked List:\n");
    SHOW();

    return 0;
}