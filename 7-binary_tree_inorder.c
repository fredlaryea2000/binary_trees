#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using the
 * in-order traversal method.
 * @tree: A reference to the root node of the tree being
 * traversed using in-order traversal.
 * @func: A reference to a function that will be called
 * for each node during traversal.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
