#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a tree
 * @tree: pointer to node to measure the depth
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (num);

	while (tree->parent != NULL)
	{
		num++;
		tree = tree->parent;
	}

	return (num);
}
