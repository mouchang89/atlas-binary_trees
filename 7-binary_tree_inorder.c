#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through binary tree using
 * in-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a function call for each node
 *
 * Return: 0 or if tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
