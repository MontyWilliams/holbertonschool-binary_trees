#include "binary_trees.h"

/**
 * get_max - check values in the tree 
 * @tree: pointer to the root node
 * @val: value 
 *
 * Return: 1 
 */
int get_max(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);
	if (tree->n > val)
	{
		l = get_max(tree->left, val);
		r = get_max(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * get_min - check  values in the tree 
 * @tree: pointer to the root node
 * @val: value 
 *
 * Return: 1 if true
 */
int get_min(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);
	if (tree->n < val)
	{
		l = get_min(tree->left, val);
		r = get_min(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_bst - checks if binary tree
 * @tree: pointer to the root node 
 *
 * Return: 1 if BST else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (get_min(tree->left, tree->n) && get_max(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}

	}
	return (0);
}
