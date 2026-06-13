#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of a linked list
void append(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;

    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

// Function to print a linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to copy a linked list to another
struct Node* copyLinkedList(struct Node* original) {
    struct Node* newHead = NULL;
    struct Node* tail = NULL;

    while (original != NULL) {
        // Create a new node
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = original->data;
        newNode->next = NULL;

        // If it's the first node, update the newHead
        if (newHead == NULL) {
            newHead = newNode;
            tail = newNode;
        } else {
            // Otherwise, append it to the new list
            tail->next = newNode;
            tail = newNode;
        }

        // Move to the next node in the original list
        original = original->next;
    }

    return newHead;
}

// Main function
int main() {
    struct Node* originalList = NULL;
    struct Node* copiedList = NULL;

    int n, data;

    // Ask the user for the number of elements in the linked list
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    // Ask the user to enter the elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        append(&originalList, data);
    }

    // Print the original list
    printf("Original List: ");
    printList(originalList);

    // Copy the linked list
    copiedList = copyLinkedList(originalList);

    // Print the copied list
    printf("Copied List: ");
    printList(copiedList);

    return 0;
}

