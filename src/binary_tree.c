#include "binary_tree.h"
#include "defines.h"

#include <stdio.h>
#include <stdlib.h>

struct binary_tree_node* binary_tree_create_empty_node(int data) {
    struct binary_tree_node* node = malloc(sizeof(struct binary_tree_node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct binary_tree_node* binary_tree_create_node(int data, struct binary_tree_node* left, struct binary_tree_node* right) {
    struct binary_tree_node* node = malloc(sizeof(struct binary_tree_node));
    node->data = data;
    node->left = left;
    node->right = right;
    return node;
}

struct binary_tree_node* binary_tree_insert_node(struct binary_tree_node* root, struct binary_tree_node* node) {
    ASSERT(node != NULL, "node adderss cannot be NULL")
    if (root == NULL) {
        return node;
    }

    if (node->data < root->data) {
        root->left = binary_tree_insert_node(root->left, node);
    } else {
        root->right = binary_tree_insert_node(root->right , node);
    }

    return root;
}

void binary_tree_print_inorder(struct binary_tree_node* root) {
    if (root == NULL) {
        return;
    }

    binary_tree_print_inorder(root->left);
    printf("%i\n", root->data);
    binary_tree_print_inorder(root->right);
}

void binary_tree_free(struct binary_tree_node* root) {
    if (root == NULL) {
        return;
    }

    binary_tree_free(root->left);
    binary_tree_free(root->right);
    free(root);
}
