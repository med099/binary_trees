#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts
 * a node as the left-child of another node
 *
 * @parent:  pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 *
 * Return:a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t	*node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;
	parent->left = node;
	if (node->left)
	node->left->parent = node;
	return (node);
}
