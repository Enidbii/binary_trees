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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt, rt;

	if (tree == NULL)
		return (0);

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);
	if (lt >= rt)
		return (1 + lt);

	return (1 + rt);
}

/**
 * binary_tree_balance - measure balane factor of binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lt, rt;

	if (tree == NULL)
		return (0);

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	return (lt - rt);
}
