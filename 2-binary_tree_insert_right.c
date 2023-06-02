#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newright_child;

	if (parent == NULL)
		return (NULL);

	newright_child = binary_tree_node(parent, value);
	if (newright_child == NULL)
		return (NULL);

	newright_child->right = parent->right;
	if (newright_child->right != NULL)
		newright_child->right->parent = newright_child;

	parent->right = newright_child;

	return (newright_child);
}
