#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor
 * of a binary tree.
 * @tree: A reference to the root node of the tree for
 * which the balance factor is being measured.
 *
 * Return: If the tree is NULL, the function should return 0;
 * otherwise, it should return the calculated balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Determines the height of a binary tree.
 * @tree: A reference to the root node of the tree for which
 * the height is being measured.
 *
 * Return: If the tree is NULL, the function should return 0;
 * otherwise, it should return the calculated height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
