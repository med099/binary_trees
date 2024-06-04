#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts
 * a node as the right-child of another node
 *
 * @parent:  pointer to the node to insert the right-child in
 * @value: the value to put in the new node
 *
 * Return:a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t	*node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	node->left = NULL;
	parent->right = node;
	if (node->right)
	node->right->parent = node;
	return (node);
}
