#include "binary_trees.h"

/**
 * binary_tree_depth - measures height of a binary tree
 * @tree: pointer to root node
 * Return: height or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree && tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
