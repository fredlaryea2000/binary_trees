#include "binary_trees.h"

/**
 * binary_tree_size - Determines the size of a binary tree.
 * @tree: A reference to the root node of the tree for which
 * the size is being measured.
 *
 * Return: The number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
