#include "binary_trees.h"

/**
 * tree_size - calculates the sum of heights of a binary tree
 * @tree: reference to the root node of the tree to measure the height
 *
 * Return: Height or 0 if the tree is NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = 1 + tree_size(tree->left);

	if (tree->right)
		height_r = 1 + tree_size(tree->right);

	return (height_l + height_r);
}

/**
 * heap_to_sorted_array - Converts a binary max heap into
 * a sorted array of integers.
 *
 * @heap: reference to the root node of the heap to convert
 * @size: Memory location to store the size of the array.
 *
 * Return: reference to array sorted in descending order
 **/
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int i, *a = NULL;

	if (!heap || !size)
		return (NULL);

	*size = tree_size(heap) + 1;

	a = malloc(sizeof(int) * (*size));

	if (!a)
		return (NULL);

	for (i = 0; heap; i++)
		a[i] = heap_extract(&heap);

	return (a);
}
