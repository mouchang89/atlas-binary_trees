#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
	{
		return (binary_tree_height(tree->left) + 1);
	}
	else
	{
		return (binary_tree_height(tree->right) + 1);
	}
}
