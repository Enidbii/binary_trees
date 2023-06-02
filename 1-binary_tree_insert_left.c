#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleft_child;

	if (parent == NULL)
		return (NULL);

	newleft_child = binary_tree_node(parent, value);
	if (newleft_child == NULL)
		return (NULL);

	newleft_child->left = parent->left;
	if (newleft_child->left != NULL)
		newleft_child->left->parent = newleft_child;

	parent->left = newleft_child;

	return (newleft_child);
}
