// C Program to Reverse a Stack using Recursion

#include <stdio.h>
#include <stdlib.h>
#define bool int

struct sNode {
    char data;
    struct sNode* next;
};

void push(struct sNode** top_ref, char new_data);
char pop(struct sNode** top_ref);
bool isEmpty(struct sNode* top);
void print(struct sNode* top);

void insertAtBottom(struct sNode** top_ref, char item) {
    if (isEmpty(*top_ref))
        push(top_ref, item);
    else {
        char temp = pop(top_ref);
        insertAtBottom(top_ref, item);
        push(top_ref, temp);
    }
}

void reverse(struct sNode** top_ref) {
    if (!isEmpty(*top_ref)) {
        char temp = pop(top_ref);
        reverse(top_ref);
        insertAtBottom(top_ref, temp);
    }
}

int main() {
    struct sNode* s = NULL;
    push(&s, '4');
    push(&s, '3');
    push(&s, '2');
    push(&s, '1');

    printf("\nOriginal Stack\n");
    print(s);
    reverse(&s);
    printf("\nReversed Stack\n");
    print(s);
    return 0;
}

bool isEmpty(struct sNode* top) {
    return (top == NULL) ? 1 : 0;
}

void push(struct sNode** top_ref, char new_data) {
    struct sNode* new_node = (struct sNode*)malloc(sizeof(struct sNode));
    if (new_node == NULL) {
        printf("Stack overflow\n");
        exit(0);
    }
    new_node->data = new_data;
    new_node->next = (*top_ref);
    (*top_ref) = new_node;
}

char pop(struct sNode** top_ref) {
    if (*top_ref == NULL) {
        printf("Stack underflow\n");
        exit(0);
    }
    struct sNode* top = *top_ref;
    char res = top->data;
    *top_ref = top->next;
    free(top);
    return res;
}

void print(struct sNode* top) {
    while (top != NULL) {
        printf(" %c ", top->data);
        top = top->next;
    }
    printf("\n");
}