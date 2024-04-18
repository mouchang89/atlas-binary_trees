#include "binary_trees.h"

/**
 * binary_tree_is_root - function checks if given node is a root
 * @node: pointer to node to check
 *
 * Return: 1 if node is root, otherwise 0 or if node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
