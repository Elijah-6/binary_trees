# 0x1D. C - Binary trees
------

1. [0-binary_tree_node.c](0-binary_tree_node.c)| --   This implementation allocates memory for a new node, initializes its members, and returns a pointer to the new node. If memory allocation fails, it returns NULL.

2. [1-binary_tree_insert.c](1-binary_tree_insert.c) --   This function inserts a node with the specified value as the left-child of the given parent node. It checks for the validity of the parent node and allocates memory for the new node. If the parent already has a left-child, the new node takes its place, and the old left-child becomes the left-child of the new node.

3. [2-binary_tree_insert_right.c](2-binary_tree_insert_right.c) --   This function inserts a node with the specified value as the right-child of the given parent node. It checks for the validity of the parent node and allocates memory for the new node. If the parent already has a right-child, the new node takes its place, and the old right-child becomes the right-child of the new node.
