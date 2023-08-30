#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a specified node in a binary tree.
 * @node: A reference to the node for which you are searching for the uncle.
 *
 * Return: If the node is NULL or has no uncle, the
 * function should return NULL. Otherwise, it should
 * return a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
