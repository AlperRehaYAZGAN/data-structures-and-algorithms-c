/**
 * Alper Reha YAZGAN
 * 10.07.2020
 * Binary Sarch and Add Element Tree Example
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *left;
    struct Node *right;
};

typedef struct Node NODE;

NODE *addElementToTree(NODE *tree, int value);

void printTree(NODE *tree);

NODE *findElementInTree(NODE *tree, int value);

int main() {
    NODE *root = NULL;
    root = addElementToTree(root, 50);
    root = addElementToTree(root, 25);
    root = addElementToTree(root, 8);
    root = addElementToTree(root, 99);
    root = addElementToTree(root, 800);
    root = addElementToTree(root, 80);
    NODE *found = findElementInTree(root, 99);
    printf("Main Tree is(Left Order): \n");
    printTree(root);
    printf("\n");
    printf("Searched Tree is: \n");
    printTree(found);
    return 0;
}


NODE *addElementToTree(NODE *tree, int value) {
    if (tree == NULL) {
        NODE *newNode = (NODE *) malloc(sizeof(NODE));
        newNode->right = NULL;
        newNode->left = NULL;
        newNode->value = value;
        return newNode;
    }

    if (tree->value > value) {
        // number is bigger than root so ADD RIGHT SIDE
        tree->left = addElementToTree(tree->left, value);
        return tree;
    }
    tree->right = addElementToTree(tree->right, value);
    return tree;
}

void printTree(NODE *tree) {
    if (tree == NULL) {
        return;
    }
    printTree(tree->left);
    printf(" %d ", tree->value);
    printTree(tree->right);
}

NODE *findElementInTree(NODE *tree, int value) {
    if (tree == NULL) {
        return NULL;
    } else if (tree->value == value) {
        return tree;
    } else if (tree->value > value) {
        return findElementInTree(tree->left, value);
    } else {
        return findElementInTree(tree->right, value);

    }
}