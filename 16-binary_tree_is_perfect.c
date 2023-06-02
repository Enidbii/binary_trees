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

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);
	if (lt >= rt)
		return (1 + lt);

	return (1 + rt);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *lt, *rt;

	if (tree == NULL)
		return (0);

	lt = tree->left;
	rt = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);

	if (lt == NULL || rt == NULL)
		return (0);

	if (binary_tree_height(lt) == binary_tree_height(rt))
	{
		if (binary_tree_is_perfect(lt) && binary_tree_is_perfect(rt))
			return (1);
	}

	return (0);
}
