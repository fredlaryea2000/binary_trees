#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a specified
 * node in a binary tree.
 * @node: A reference to the node for which you are
 * searching for the sibling.
 *
 * Return: If the node is NULL or there is no sibling,
 * the function should return NULL. Otherwise, it should
 * return a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
