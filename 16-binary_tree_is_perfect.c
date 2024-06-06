#include "binary_trees.h"

/**
 * s_binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
static size_t s_binary_tree_height(const binary_tree_t *tree)
{
	size_t	left_height;
	size_t	right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = s_binary_tree_height(tree->left);
	right_height = s_binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = s_binary_tree_height(tree->left);
	size_t right_height = s_binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
