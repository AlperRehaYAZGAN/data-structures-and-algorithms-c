#include <stdio.h>
#include <stdlib.h>

/**
 * Alper Reha YAZGAN
 * Main Linked List Operations for many linked list types.
 * 09.07.2020
 */

struct Node {
    int value;
    struct Node *next;
};

void printList(struct Node *head);
void addElementToList(int value);
int lengthOfList(struct Node *headNode);
void deleteElementFromList(int value);
void sortList();
void swap(int *pFirst, int *pSecond);

struct Node *head = NULL;

int main() {
    addElementToList(10);
    addElementToList(50);
    addElementToList(5);
    addElementToList(99);
    addElementToList(20);
    addElementToList(8);
    addElementToList(3);
    sortList();
    deleteElementFromList(3);
    printList(head);
    printf("\n");
    printf("Size of linked list is: %d \n",lengthOfList(head));
    return 0;
}

/**
 * Delete from linked list by given value.
 * @param value
 */
void deleteElementFromList(int value) {
    int hasDeletedYet = 0;
    struct Node *tempNode = head;
    struct Node *prevNodeToAttach = tempNode;
    while(tempNode != NULL || hasDeletedYet != 1) {
        if(tempNode->value == value) {
            hasDeletedYet = 1;
            if(tempNode == head) {
                // if the element is head element
                head = head->next;
            } else if(tempNode->next == NULL) {
                // if the element is the last element
                prevNodeToAttach->next = NULL;
            } else {
                // if element is middle element
                tempNode = tempNode->next;
                prevNodeToAttach->next = tempNode;
            }
        }
        prevNodeToAttach = tempNode;
        tempNode = tempNode->next;
    }

}

/**
 * Sort the head linked list.
 */
void sortList() {
    int isSuccess = 0;
    while (isSuccess != 1) {
        isSuccess = 1;
        struct Node *tempNode = head;
        while (tempNode->next != NULL) {
            if(tempNode->value >= tempNode->next->value) {
                swap(&tempNode->value,&tempNode->next->value);
                isSuccess = 0;
            }
            tempNode = tempNode->next;
        }
    }
}

/**
 * Find the length of given Node.
 * @param headNode
 * @return
 */
int lengthOfList(struct Node *headNode) {
    int length = 0;
    struct Node *current;
    for(current = headNode; current != NULL; current = current->next) {
        length++;
    }
    return length;
}

void addElementToList(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = value;
    // now you have created a new node
    // so you should define head's next and then set head new node
    newNode->next = head;
    head= newNode;
}

void printList(struct Node *headNode) {
    struct Node *tempNode = headNode;
    printf("[");
    while (tempNode != NULL) {
        printf(" %d ",tempNode->value);
        tempNode = tempNode->next;
    }
    printf("]");
}

/**
 * This function swaps values pointed by first number and second number
 * @param pFirst
 * @param pSecond
 */
void swap(int *pFirst, int *pSecond) {
    int temp = *pFirst;
    *pFirst = *pSecond;
    *pSecond = temp;
}