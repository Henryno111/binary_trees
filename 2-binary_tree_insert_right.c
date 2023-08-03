#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: the value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *node;

        node = binary_tree_node(parent, value);
        if (node == NULL)
        {
                return (NULL);
        }
        if (parent == NULL)
        {
                return (NULL);
        }
        if (parent->right != NULL)
        {
                node->right = parent->right;
                parent->right->parent = node;
        }
        else
	{
		node->right = NULL;
	}
	parent->right = node;
	return (node);
}
