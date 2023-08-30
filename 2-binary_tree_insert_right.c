
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child of
 *                            of another in the binary tree.
 * @parent: pointer to the node to insert the right child in.
 * @value: the value to store in the new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *         Else - a pointer to the new node.
 *
 * Description: If parent already has a right child, the new node
 *              takes it's place and the old right child is set as
 *              the right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
