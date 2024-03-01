#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 * If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If the tree is a leaf (both children are NULL), it's full */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* If one child is NULL and the other is not, the tree is not full */
if (tree->left == NULL || tree->right == NULL)
return (0);

/* Recursively check if both the left and right subtrees are full */
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
