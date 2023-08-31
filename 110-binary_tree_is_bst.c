#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Finds out if a binary tree is a valid binary search tree.
 * @tree: reference to the root node of the tree to check.
 * @lo: value of the smallest node visited thus far.
 * @hi: value of the largest node visited this far.
 *
 * Return: If the tree is a valid BST, 1, else, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Finds out if a binary tree is a
 * valid binary search tree.
 * @tree: A referenc to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
