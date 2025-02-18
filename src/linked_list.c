#include "linked_list.h"
#include "defines.h"

#include <stdlib.h>

struct linked_list_node* linked_list_create_empty_node(int data) {
    struct linked_list_node* node = malloc(sizeof(struct linked_list_node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct linked_list_node* linked_list_append_node(struct linked_list_node* head, struct linked_list_node* node) {
    ASSERT(node != NULL, "node address cannot be NULL")
    if (head == NULL) {
        return node;
    }

    struct linked_list_node* head_node = head;
    while (head_node->next != NULL) {
        head_node = head_node->next;
    }

    head_node->next = node;
    return head;
}

struct linked_list_node* linked_list_insert_node(struct linked_list_node* head, struct linked_list_node* node, int position) {
    ASSERT(node != NULL, "node pointer cannot be NULL")
    if (position <= 1) {
        node->next = head;
        return node;
    }

    int length = linked_list_get_length(head);
    if (position > length) {
        head = linked_list_append_node(head, node);
        return head;
    }

    ASSERT(head != NULL, "cannot insert a node in the middle of a non existant list")
    struct linked_list_node* head_node = head;
    while (position != 2) {
        head_node = head_node->next;
        --position;
    }

    node->next = head_node->next;
    head_node->next = node;
    return head;
}

void linked_list_print(struct linked_list_node* head) {
    while (head != NULL) {
        printf("%i\n", head->data);
        head = head->next;
    }
}

void linked_list_free(struct linked_list_node* head) {
    while (head != NULL) {
        struct linked_list_node* next_node = head->next;
        free(head);
        head = next_node;
    }
}

int linked_list_get_length(struct linked_list_node* head) {
    int length = 0;
    while (head != NULL) {
        ++length;
        head = head->next;
    }
    return length;
}
