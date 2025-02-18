#ifndef LINKED_LIST
#define LINKED_LIST

struct linked_list_node {
    struct linked_list_node* next;
    int data;
};

struct linked_list_node* linked_list_create_empty_node(int data);
struct linked_list_node* linked_list_append_node(struct linked_list_node* head, struct linked_list_node* node);

/*! @brief inserts a node at the specified position
 *
 *  @details this function inserts the given node at the specified position in the linked
 *  list. position of head node is 1. if position < 1 or position > length, then
 *  the node is inserted at the head and the tail respectively.
 *
 *  @param[in] head         pointer to head of the linked list
 *  @param[in] node         pointer to the node to be inserted
 *  @param[in] position     position to insert the node
 *
 *  @return                 pointer to head node
 *   * lifetime
 *     * sahil
 *     * sahil2
 *   * sahil 2
 *
 *  @remark blah blah :) same on all the platforms
 *  * @ref linked_list_create_empty_node
 *  * @ref linked_list_append_node
 *
 *  @pointer_lifetime 
 *  the returned node is allocated but not freed by the function.
 *  the caller has to free the node by calling @ref binary_tree_free for example.
 *
 *  ```
 *  set_class_name("os::infra::test_suite");
 *  ```
 *
 *  @thread_safety i don't know threading yet :)
 *  @since added in version 1.0
 *  @ingroup linked_list
 *
 *  @todo handle special cases
 */

struct linked_list_node* linked_list_insert_node(struct linked_list_node* head, struct linked_list_node* node, int position);

void linked_list_print(struct linked_list_node* head);
void linked_list_free(struct linked_list_node* head);

int  linked_list_get_length(struct linked_list_node* head);

#endif
