#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 *
 * Return: 0 if tree is NULL, NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
