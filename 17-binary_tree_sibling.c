#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to node to find sibling
 *
 * Return: pointer to sibling node otherwise
 * NULL if node is NULL, parent is NULL, or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
