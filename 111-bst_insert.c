#include <stdlib.h>
#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST)
 * @tree: Double pointer to the root node of the BST
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
if (tree == NULL)
return (NULL);

/* If the tree is empty, create a new node and make it the root */
if (*tree == NULL)
{
*tree = binary_tree_node(NULL, value);
return (*tree);
}

/* If the value is less than the current node's value */
if (value < (*tree)->n)
{
if ((*tree)->left == NULL)
{
(*tree)->left = binary_tree_node(*tree, value);
return ((*tree)->left);
}
else
{
return (bst_insert(&((*tree)->left), value));
}
}
/* If the value is greater insert in the right subtree */
else if (value > (*tree)->n)
{
if ((*tree)->right == NULL)
{
(*tree)->right = binary_tree_node(*tree, value);
return ((*tree)->right);
}
else
{
return (bst_insert(&((*tree)->right), value));
}
}

/* If the value is already present, ignore and return NULL */
return (NULL);
}
