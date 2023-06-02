#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt, rt;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	lt = binary_tree_height(tree->lt);
	rt = binary_tree_height(tree->rt);
	if (lt >= rt)
		return (1 + lt);

	return (1 + rt);
}
