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
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree:  pointer to the root node of the tree to count
 * Return: count or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lt, rt;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	lt = binary_tree_nodes(tree->left);
	rt = binary_tree_nodes(tree->right);

	return (1 + lt + rt);
}
