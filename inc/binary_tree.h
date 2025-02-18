#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct binary_tree_node {
    struct binary_tree_node *left, *right;
    int data;
};

struct binary_tree_node* binary_tree_create_empty_node(int data);
struct binary_tree_node* binary_tree_create_node(int data, struct binary_tree_node* left, struct binary_tree_node* right);
struct binary_tree_node* binary_tree_insert_node(struct binary_tree_node* root, struct binary_tree_node* node);

void binary_tree_print_inorder(struct binary_tree_node* root);
void binary_tree_free(struct binary_tree_node* root);

#endif
