#include "binary_trees.h"

/**
 * binary_tree_leaves - Calculates the count of leaves in a binary tree.
 * @tree: A reference to the root node of the tree for which the count of leaves is being calculated.
 *
 * Return: The count of leaf nodes within the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
