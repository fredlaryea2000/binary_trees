#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs traversal of a binary tree
 * using the post-order traversal technique.
 * @tree: A reference to the root node of the tree being traversed
 * using post-order traversal.
 * @func: A reference to a function that will be called for each node
 * during the traversal process.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
