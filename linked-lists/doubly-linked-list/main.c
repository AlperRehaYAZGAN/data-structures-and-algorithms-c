#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
    struct Node *prev;
};

void addElementToList(int value);

void sortList();

void printList();

void swap(struct Node *pNext, struct Node *pPrev);

void deleteElementFromList(int value);


struct Node *head = NULL;


int main() {
    addElementToList(12);
    addElementToList(25);
    addElementToList(10);
    addElementToList(99);
    addElementToList(80);
    addElementToList(850);
    addElementToList(50);
    addElementToList(1);
    sortList();
    deleteElementFromList(1);
    printList();
    printf("Hello, World!\n");
    return 0;
}

void addElementToList(int value) {
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->next = NULL;
    newNode->prev = head;
    newNode->value = value;

    if (head != NULL) {
        head->next = newNode;
    }
    head = newNode;
}

void printList() {
    struct Node *tempNode = head;
    printf("[");
    while (tempNode != NULL) {
        printf(" %d ", tempNode->value);
        tempNode = tempNode->prev;
    }
    printf("]");
}

void sortList() {

    int isFinished = 0;
    while (isFinished != 1) {
        isFinished = 1;
        struct Node *tempNode = head;
        while (tempNode->prev != NULL) {
            if (tempNode->value > tempNode->prev->value) {
                swap(tempNode,tempNode->prev);
                isFinished = 0;
            }
            tempNode = tempNode->prev;
        }

    }


}

void deleteElementFromList(int value) {
    struct Node *tempNode = head;

    int hasDeletedYet = 0;
    while(tempNode != NULL || hasDeletedYet != 1) {
        if(tempNode->value == value) {
            if(tempNode == head) {
                // if the element is head element
                head = head->prev;
                head->next = NULL;
            } else if(tempNode->prev == NULL) {
                // if the element is the last element
                struct Node *nextNodeToAttach = tempNode->next;
                nextNodeToAttach->prev = NULL;
            } else {
                // if element is middle element
                struct Node *prevNodeToAttach = tempNode->prev;
                struct Node *nextNodeToAttach = tempNode->next;
                prevNodeToAttach->next = nextNodeToAttach;
                nextNodeToAttach->prev = prevNodeToAttach;
            }
            hasDeletedYet = 1;
        }
        tempNode = tempNode->prev;
    }

}

void swap(struct Node *pNext, struct Node *pPrev) {
    int tempValue = pNext->value;
    pNext->value = pPrev->value;
    pPrev->value = tempValue;
}

