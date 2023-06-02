#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the binary tree
 * @tree: pointer to the binary tree to be measured
 * Return: size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt, rt;

	if (tree == NULL)
		return (0);

	lt = binary_tree_size(tree->lt);
	rt = binary_tree_size(tree->rt);

	return (1 + lt + rt);
}
