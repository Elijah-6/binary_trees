#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node,
 *         or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *ancestor = NULL;

if (first == NULL || second == NULL)
return (NULL);

/* Start from the given nodes and move upwards to find common ancestor */
while (first != NULL)
{
const binary_tree_t *temp = second;

while (temp != NULL)
{
if (first == temp)
return ((binary_tree_t *)first);

temp = temp->parent;
}

first = first->parent;
}

return ((binary_tree_t *)ancestor);
}
