// Created by lin on 2023/9/6.
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct {
  int value;
  struct Node *next;
} Node;

Node *create_node(int value) {
    Node *node = malloc(sizeof(Node));
    if (!node) {
        exit(1);
    }
    node->value = value;
    node->next = NULL;
    return node;
}

void destroy_node(Node **ppNode) {
    (*ppNode)->next = NULL;
    free(*ppNode);
    *ppNode = NULL;
}

Node *create_list(int arr[], int len) {
    if (len <= 0)
        return NULL;
    Node *head = create_node(arr[0]);
    Node *cur = head;
    for (int i = 1; i < len; i++) {
        cur->next = create_node(arr[i]);
        cur = cur->next;
    }
    return head;
}

void destroy_list(Node **ppHead) {
    if (ppHead == NULL || *ppHead == NULL) {
        return;
    }
    Node *cur = *ppHead;
    do {
        Node *delNode = cur;
        cur = cur->next;
        destroy_node(&delNode);
    } while (cur);
    *ppHead = NULL;
}

void print_list(Node *head) {
    if (head == NULL) {
        printf("[]\n");
        return;
    }
    do {
        printf("%d, ", head->value);
        head = head->next;
    } while (head);
    printf("\n");
}

void insert_node(Node **ppHead, int value, int index) {
    if (!ppHead || index < 0) {
        return;
    }
    Node *new_node = create_node(value);
    if (index == 0) {
        new_node->next = *ppHead;
        *ppHead = new_node;
    } else {
        //头节点为 NULL 就创建一个新头节点
        if (!(*ppHead)) {
            *ppHead = create_node(0);
        }
        Node *cur = *ppHead;
        while (index > 1) {
            if (!cur->next) {
                cur->next = create_node(0);
            }
            cur = cur->next;
            index--;
        }
        new_node->next = cur->next;
        cur->next = new_node;
    }
}

int main() {

    int arr[] = {0, 1, 2, 3};
    Node *head = create_list(arr, 4);

    print_list(head);

    insert_node(&head, 100, 3);
    insert_node(&head, 200, 5);
    insert_node(&head, 300, 1);
    insert_node(&head, 400, 0);
    print_list(head);

    destroy_list(&head);
    printf("head == %p\n", head);
    print_list(head);

    insert_node(&head, 100, 3);
    insert_node(&head, 200, 6);
    insert_node(&head, 300, 0);
    print_list(head);

    destroy_list(&head);
    printf("head == %p\n", head);
    print_list(head);

    return 0;
}

