#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
 
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	size = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (size);
}
