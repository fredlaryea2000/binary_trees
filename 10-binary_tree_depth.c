#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node
 * within a binary tree.
 * @tree: A reference to the node for which the depth
 * is being measured.
 * Return: If the tree is NULL, the function should return 0;
 * otherwise, it should return the calculated depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
