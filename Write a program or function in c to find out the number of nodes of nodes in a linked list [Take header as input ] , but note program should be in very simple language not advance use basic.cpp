#include <stdio.h>
#include <stdlib.h>

// structure of a node
struct node {
    int data;
    struct node *next;
};

// function to count nodes
int countNodes(struct node *head) {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    struct node *head = NULL, *newNode, *temp;
    int n, i, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &val);
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Total number of nodes = %d\n", countNodes(head));

    return 0;
}

