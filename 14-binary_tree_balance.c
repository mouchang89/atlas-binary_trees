#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to root node of tree to measure balance factor
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to root node of tree to measure the height
 *
 * Return: 0 if tree is NULL
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
