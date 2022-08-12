#include "binary_trees.h"
/**
 * bst_search - search binary tree for value
 * @tree: pointer to tree
 * @value: value to search
 * Return: pointer to node with value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	if (value > tree->n)
		return (bst_search(tree->right, value));
	if (value == tree->n)
		return ((bst_t *)tree);
	return (NULL);
}
