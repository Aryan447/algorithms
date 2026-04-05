#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));

    if (n1 == NULL) {
        fprintf(stderr, "Failed to allocate memory for Node N1\n");
        exit(EXIT_FAILURE);
    }

    if (n2 == NULL) {
        fprintf(stderr, "Failed to allocate memory for Node N2\n");
        exit(EXIT_FAILURE);
    }

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = NULL;

    printf("\n");

    free(n1);
    free(n2);
    n1 = NULL;
    n2 = NULL;
}
