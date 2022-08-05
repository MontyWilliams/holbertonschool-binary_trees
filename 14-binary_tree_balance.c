#include "binary_trees.h"

/**
 * binary_tree_height_balanced - measures height of tree
 * @tree: pointer to root
 * Return: height 
 */

size_t binary_tree_height_balanced(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height_balanced(tree->left) + 1;
	right = binary_tree_height_balanced(tree->right) + 1;
	if (left > right)
		return (left);
	return (right);

}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to binary tree
 * Return: difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int sizeDif = 0, left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height_balanced(tree->left);
	right = binary_tree_height_balanced(tree->right);
	sizeDif = left - right;
	return (sizeDif);
}
