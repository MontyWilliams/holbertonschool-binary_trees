#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert right node
 * @parent: pointer to the parent node
 * @value: value for the new node
 * Return: new_node or null 
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
