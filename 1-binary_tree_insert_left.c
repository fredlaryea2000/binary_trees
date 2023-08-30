#include "binary_trees.h"

/**
 * binary_tree_insert_left - to insert a node as a left child
 *                           of another in a binary tree.
 * @parent: pointer to the node to insert the leftchild in.
 * @value: he value to store in the new node.
 *
 * Return: if parent is NULL or error occurs - NULL.
 *         else - a pointer to the new node.
 *
 * Description: if the parent already has a left child, the new node
 *              takes its place and the old left child is set as
 *              the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
