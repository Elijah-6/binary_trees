# 0x1D. C - Binary trees
------

1. [0-binary_tree_node.c](0-binary_tree_node.c)| --   This implementation allocates memory for a new node, initializes its members, and returns a pointer to the new node. If memory allocation fails, it returns NULL.

2. [1-binary_tree_insert_left.c](1-binary_tree_insert_left.c) --   This function inserts a node with the specified value as the left-child of the given parent node. It checks for the validity of the parent node and allocates memory for the new node. If the parent already has a left-child, the new node takes its place, and the old left-child becomes the left-child of the new node.

3. [2-binary_tree_insert_right.c](2-binary_tree_insert_right.c) --   This function inserts a node with the specified value as the right-child of the given parent node. It checks for the validity of the parent node and allocates memory for the new node. If the parent already has a right-child, the new node takes its place, and the old right-child becomes the right-child of the new node.

4. [4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c) -- This function checks if a given node is a leaf by verifying if both its left and right child pointers are NULL. If the node is a leaf, the function returns 1; otherwise, it returns 0. If the input node is NULL, it also returns 0.
