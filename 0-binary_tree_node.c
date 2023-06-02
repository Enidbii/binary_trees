#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree nod
 * @parent: ponter to the parent node to be created
 * @value: value to put in the new node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_intro;

	node_intro = malloc(sizeof(binary_tree_t));

	if (node_intro == NULL)
		return (NULL);

	node_intro->parent = parent;
	node_intro->n = value;
	node_intro->left = NULL;
	node_intro->right = NULL;
	return (node_intro);
}
