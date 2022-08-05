#include "binary_trees.h"


/**
 * binary_tree_insert_left - insers left node
 * @parent: pointer to the parent node
 * @value: value for the new node
 * Return: new_node or null 
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
