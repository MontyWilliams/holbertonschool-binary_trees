#include "binary_trees.h"

/**
 * binary_tree_size - measure size of a binary tree
 * @tree: pointer to tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, size = 0;

	if (!tree)
		return (size);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right + 1;
	return (size);
}
