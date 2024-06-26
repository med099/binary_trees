#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t	*node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
