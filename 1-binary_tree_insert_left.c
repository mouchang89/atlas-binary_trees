#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of
 * another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to creade node
 * NULL if failed or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
