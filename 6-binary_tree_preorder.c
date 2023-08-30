#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using the pre-order traversal technique.
 * @tree: A reference to the root node of the tree being traversed using pre-order traversal.
 * @func: A reference to a function that will be called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
