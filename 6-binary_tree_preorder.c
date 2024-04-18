#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through binary tree using
 * pre-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a function call for each node
 *
 * Return: 0 or if tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
