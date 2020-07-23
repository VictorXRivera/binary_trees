#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function to insert a node
 * as the left child of parent
 * @parent: Pointer to parent of binary tree
 * @value: Values to set
 * Return: Pointer to created node or NULL on fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent != NULL)
	{
		node->left = parent->left;
		if (parent->left != NULL)
			parent->left->parent = node;
		if (node == NULL)
			return (NULL);
		parent->left = node;
	}
	return (node);
}
