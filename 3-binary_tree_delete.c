#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to root node of tree to delete
 *
 * Return: if tree is NULL, do nothing or tree deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
