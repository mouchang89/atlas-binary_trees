#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to root node of tree to count number of nodes
 *
 * Return: 0 if tree is NULL, NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if (!tree->left || !tree->right)
	{
		return (0);
	}
	else
	{
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	}
	return (nodes);
}
