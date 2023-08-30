#include "binary_trees.h"

/**
 * is_full_recursive - Recursively determines whether a
 * binary tree is full.
 * @tree: A reference to the root node of the binary tree being
 * checked for fullness recursively.
 *
 * Return: If the tree is not full, the function should return 0.
 * If the tree is full, the function should return 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Verifies whether a binary tree is full.
 * @tree: A reference to the root node of the binary tree
 * being checked for fullness.
 *
 * Return: If the tree is NULL or not full, the function should return 0.
 * Otherwise, it should return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
