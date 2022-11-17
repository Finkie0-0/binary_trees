#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * 
 * Return: pointer to the created node, or NULL in failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
    binary_tree_t *left_child;

    if (parent == NULL)
        return (NULL);
    left_child = binary_tree_node(parent, value);
    if (left_child == NULL)
        return (NULL);
    left_child->left = parent->left;
    if (left_child->left != NULL)
        left_child->left->parent = left_child;
    parent->left = left_child;
    return (left_child);
}

