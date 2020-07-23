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

	if (parent == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	parent->left = node;
	node->right = NULL;

	if (node->left)
		node->left->parent = node;

	return (node);
}
