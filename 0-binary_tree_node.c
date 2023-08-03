#include "binary_trees.h"

/**
* binary_tree_node - creates a new node for a binary tree
* @parent: pointer to the parent node of the new node
* @value: the value to store in the new node
* Return: pointer to the new node or NULL if allocation fails
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->left = node->right = NULL;
	if (parent == NULL)
	{
		parent = node;
	}
	else
	{
		node->parent = parent;
	}
	return (node);
}
