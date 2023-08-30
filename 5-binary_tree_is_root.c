#include "binary_trees.h"

/**
 * binary_tree_is_root - Verifies whether a given node
 * serves as the root of a binary tree.
 * @node: A reference to the node being assessed.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
