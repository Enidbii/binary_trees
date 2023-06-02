#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to the node to check
 * Return: 1 if node is leaf and 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);


	return (0);
}

/**
 * binary_tree_is_full - checks if binary tree is ful
 * @tree: pointer to the root node to check
 * Return: check or 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lt, rt;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	lt = binary_tree_is_full(tree->left);
	rt = binary_tree_is_full(tree->right);

	if (lt == 0 || rt == 0)
		return (0);

	return (1);
}
