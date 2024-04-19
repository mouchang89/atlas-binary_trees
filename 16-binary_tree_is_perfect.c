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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure size
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree) + 1;
	size_t size = binary_tree_size(tree);
	size_t res = 1;

	if (tree)
	{
		while (height-- > 0)
		{
			res = res * 2;
		}
		res -= 1;
		if (res == size)
		{
			return (1);
		}
	}
	return (0);
}
